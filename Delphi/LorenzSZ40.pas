unit LorenzSZ40;

interface

uses
  Winapi.Windows,
  Winapi.Messages,
  System.SysUtils,
  System.Variants,
  System.Classes,
  Vcl.Graphics,
  Vcl.Controls,
  Vcl.Forms,
  Vcl.Dialogs,
  Vcl.ToolWin,
  Vcl.ComCtrls,
  Vcl.StdCtrls,
  Vcl.ExtCtrls,
  Vcl.Menus,
  MMSystem,
  System.Math,
  LorenzMachine,
  LorenzWheel;

type
  TSimulationStatus = (Working, WorkingNoUI, Finished, Canceled);

  TSimulationThread = class(TThread)
  private
     { Private declarations }
     FSleepTime : Integer;
     FPlaySound : Boolean;
     FMessage: String;
     FLorenzMachine: TLorenzMachine;
  protected
    procedure Execute; override;
  end;

  TLorenzSZ40Form = class(TForm)
    ContentMemo: TMemo;
    MainPanel: TPanel;
    ControlsPanel: TPanel;
    EncryptButton: TButton;
    SimulationGridPanel: TGridPanel;
    SimulationSpeedTrackBar: TTrackBar;
    SimulationPanel: TPanel;
    SimulationDelayLabel: TLabel;
    SoundCheckBox: TCheckBox;
    PinDataMemo: TMemo;
    GroupBox1: TGroupBox;
    GroupBox2: TGroupBox;
    ApplyPindataButton: TButton;
    ApplyRandomPindataButton: TButton;
    ImportPindataButton: TButton;
    ExportPindataButton: TButton;
    Panel1: TPanel;
    PindataCountLabel: TLabel;
    ContentStatusBar: TStatusBar;
    ContentPanel: TPanel;
    procedure FormActivate(Sender: TObject);
    procedure ContentMemoClick(Sender: TObject);
    procedure EncryptButtonClick(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
    procedure FormResize(Sender: TObject);
    procedure SimulationSpeedTrackBarChange(Sender: TObject);
    procedure SoundCheckBoxClick(Sender: TObject);
    procedure PinDataMemoChange(Sender: TObject);
    procedure ApplyPindataButtonClick(Sender: TObject);
    procedure ApplyRandomPindataButtonClick(Sender: TObject);
    procedure ContentMemoChange(Sender: TObject);
  private
    { Private declarations }
    FSimulationThread : TSimulationThread;
    FOldWidth, FOldHeight, FColCount, FRowCount, FBlankCol1, FBlankCol2: Integer;
    FNameColor, FPreviousWheelsColor, FCurrentWheelsColor, FNextWheelsColor, FMiscColor : TColor;
    FFirstFocus, FDarkMode : Boolean;
    FLorenzMachine : TLorenzMachine;
    FPreviousMessage : String;
    const WM_UPDATE_UI_MESSAGE = WM_USER + 0;
    procedure SetUpSimulationGridPanel;
    procedure UpdateSimulationUI(AMessage: String = '');
    procedure UpdateUIMessageRecieved(var Msg: TMessage); message WM_UPDATE_UI_MESSAGE;
    //procedure ChangeTheme;
    function CalculateMaxSize(aCanvas: TCanvas; aText: string; aWidth, aHeight: Integer): Integer;
  public
    { Public declarations }
  end;

var
  LorenzSZ40Form: TLorenzSZ40Form;

implementation

{$R *.dfm}


{ TSimulationThread }
{------------------------------------------------------------------------------}

{ Execute }
{------------------------------------------------------------------------------}
procedure TSimulationThread.Execute;
var
  Index : Integer;
  FCurrentMessage : String;
begin
  Priority := tpHighest;
  FCurrentMessage := '';
  Screen.Cursor := crHourGlass;

  try
    // String indexes in Delphi begin at 1.
    for Index := 1 to Length(FMessage) do
    begin
      if (Terminated) then
        Break;

      FCurrentMessage := FCurrentMessage + FLorenzMachine.EncryptDecrypt(FMessage[Index]);
      if (FSleepTime <> 0) then
      begin
        if (FPlaySound) and (FSleepTime >= 200) then
          PlaySound('typewriter.wav', 0, SND_ASYNC);

        SendMessage(LorenzSZ40Form.Handle, TLorenzSZ40Form.WM_UPDATE_UI_MESSAGE, Integer(FCurrentMessage), ord(TSimulationStatus.Working));
        Sleep(FSleepTime);

        if (FPlaySound) then
          PlaySound(nil, 0, SND_ASYNC);
      end
      else
      begin
        SendMessage(LorenzSZ40Form.Handle, TLorenzSZ40Form.WM_UPDATE_UI_MESSAGE, Integer(FCurrentMessage), ord(TSimulationStatus.WorkingNoUI));
      end;
    end;
  finally
    Screen.Cursor := crDefault;
    // Send a final message just to ensure the final output is correct.
    if (Terminated) then
      SendMessage(LorenzSZ40Form.Handle, TLorenzSZ40Form.WM_UPDATE_UI_MESSAGE, Integer(FCurrentMessage), ord(TSimulationStatus.Canceled))
    else
      SendMessage(LorenzSZ40Form.Handle, TLorenzSZ40Form.WM_UPDATE_UI_MESSAGE, Integer(FCurrentMessage), ord(TSimulationStatus.Finished));

    Application.ProcessMessages;
  end;
end;

{ TLorenzSZ40Form }
{------------------------------------------------------------------------------}

{ FormActivate }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.FormActivate(Sender: TObject);
var
  PinDataTemp : TArray<Integer>;
  Index : Integer;
begin
  FFirstFocus := True;
  FDarkMode := True;
  SoundCheckBox.Checked := True;
  SimulationDelayLabel.Caption := 'Delay (' + IntToStr(SimulationSpeedTrackBar.Position) + 'ms)';
  FOldWidth := Width;
  FOldHeight := Height;
  FColCount := 16;
  FRowCount := 4;
  FBlankCol1 := 6;
  FBlankCol2 := 9;
  ContentMemo.Text := 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec ultricies convallis pretium. Sed in tortor urna. Vestibulum vitae porta mauris, non ornare metus.' + ' Nullam ultrices dui leo, in consequat velit porta quis. Maecenas in tristique eros, quis efficitur lacus. Fusce imperdiet neque vel lectus cursus, quis maximus ' + ' libero egestas. Donec eu condimentum nulla. Sed nec volutpat lorem. Aliquam ac feugiat enim. Pellentesque consectetur pellentesque ligula ut gravida. Curabitur lobortis aliquet neque, sed viverra dui tempor in.' + ' Vivamus posuere viverra sollicitudin. Morbi lacus velit, luctus sit amet feugiat hendrerit, sagittis at nunc. Nunc rutrum cursus arcu, eget semper lacus iaculis at. Phasellus interdum nulla eget rhoncus laoreet.';
  FLorenzMachine := TLorenzMachine.Create;

  PindataMemo.Clear;
  PinDataTemp := FLorenzMachine.WheelCollection.Pindata;
  for Index := 0 to Length(PinDataTemp) do
    PindataMemo.Text := PindataMemo.Text + IntToStr(PinDataTemp[Index]);

  //ChangeTheme;
  SetUpSimulationGridPanel;
  UpdateSimulationUI;
end;

{ FormDestroy }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.FormDestroy(Sender: TObject);
begin
  if (FSimulationThread <> nil) and (not FSimulationThread.Finished) then
    FSimulationThread.Terminate;

  FreeAndNil(FLorenzMachine);
end;

{ FormResize }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.FormResize(Sender: TObject);
var
  Index1, Index2 : Integer;
  ALabel: TLabel;
begin
  for Index1 := 0 to FColCount do
  begin
    for Index2 := 0 to FRowCount do
    begin
      ALabel := TLabel(SimulationGridPanel.ControlCollection.Controls[Index1, Index2]);
      if (Assigned(ALabel)) then
      begin
        ALabel.Height := (ALabel.Height * Height) div FOldHeight;
        ALabel.Width := (ALabel.Width * Width) div FOldWidth;
        ALabel.Font.Size := CalculateMaxSize(ALabel.Canvas, ALabel.Caption, ALabel.Width, ALabel.Height);
        FOldWidth := Width;
        FOldHeight := Height;
      end;
    end;
  end;
end;

{ PinDataMemoChange }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.PinDataMemoChange(Sender: TObject);
var
  MemoCharCount : Integer;
begin
  MemoCharCount := Length(TLabel(Sender).Caption);

  if (MemoCharCount < 501) then
    PindataCountLabel.Font.Color := clRed
  else
    PindataCountLabel.Font.Color := clBlue;

  PindataCountLabel.Caption := IntToStr(MemoCharCount) + '/501';
end;

{ ChangeTheme }
{------------------------------------------------------------------------------
procedure TLorenzSZ40Form.ChangeTheme;
begin
  ContentPanel.ParentColor := False;
  ContentPanel.ParentBackground := False;
  if (FDarkMode) then
  begin
    ContentMemo.Color := clBlack;
    ControlsPanel.Color := clBlack;
    SoundCheckBox.Color := clBlack;
    PindataMemo.Color := clBlack;

    Label1.Font.Color := clWhite;
    Label2.Font.Color := clWhite;
    ContentMemo.Font.Color := clWhite;
    PindataMemo.Font.Color := clWhite;
    SoundCheckBox.Font.Color := clWhite;
  end;
end;

{ SimulationSpeedTrackBarChange }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.SimulationSpeedTrackBarChange(Sender: TObject);
var
  ATrackBar : TTrackBar;
begin
  ATrackBar := TTrackBar(Sender);

  if (FSimulationThread <> nil) and (not FSimulationThread.Finished) then
    FSimulationThread.FSleepTime := ATrackBar.Position;

  if (ATrackBar.Position = 0) then
    SimulationDelayLabel.Caption := 'Realtime (as fast as possible)'
  else
    SimulationDelayLabel.Caption := 'Delay (' + IntToStr(ATrackBar.Position) + 'ms)'
end;

{ SoundCheckBoxClick }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.SoundCheckBoxClick(Sender: TObject);
begin
  if (FSimulationThread <> nil) and (not FSimulationThread.Finished) then
    FSimulationThread.FPlaySound := TCheckBox(Sender).Checked;
end;

{ UpdateUIMessageRecieved }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.UpdateUIMessageRecieved(var Msg: TMessage);
begin

  case (Msg.LParam) of
    Ord(TSimulationStatus.Finished):
    begin
      ContentMemo.Enabled := True;
      UpdateSimulationUI(String(Msg.WParam));
      EncryptButton.Caption := 'Encrypt/Decrypt';
      SendMessage(ContentMemo.Handle, EM_LINESCROLL, 0, ContentMemo.Lines.Count);
    end;

    Ord(TSimulationStatus.Working):
    begin
      ContentMemo.Enabled := False;
      UpdateSimulationUI(String(Msg.WParam));
      SendMessage(ContentMemo.Handle, EM_LINESCROLL, 0, ContentMemo.Lines.Count);
      EncryptButton.Caption := 'Cancel';
    end;

    Ord(TSimulationStatus.WorkingNoUI):
    begin
      ContentMemo.Enabled := False;
      EncryptButton.Caption := 'Cancel';
    end;

    Ord(TSimulationStatus.Canceled):
    begin
      ContentMemo.Enabled := True;
      UpdateSimulationUI;
      EncryptButton.Caption := 'Encrypt/Decrypt';
      ContentMemo.Text := FPreviousMessage;
      SendMessage(ContentMemo.Handle, EM_LINESCROLL, 0, 0);
    end;
  end;
end;

{ ContentMemoChange }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.ContentMemoChange(Sender: TObject);
begin
  if (FSimulationThread <> nil) and (not FSimulationThread.Finished) then
    ContentStatusBar.Panels[0].Text := IntToStr(Length(ContentMemo.Text)) + '/' + IntToStr(Length(FPreviousMessage)) + ' characters'
  else
    ContentStatusBar.Panels[0].Text := IntToStr(Length(ContentMemo.Text)) + ' characters';
end;

{ ContentMemoClick }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.ContentMemoClick(Sender: TObject);
begin
  if (FFirstFocus) then
    ContentMemo.Text := '';
  FFirstFocus := False;
end;

{ EncryptButtonClick }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.EncryptButtonClick(Sender: TObject);
begin
  begin
    try
      if (FSimulationThread <> nil) and (not FSimulationThread.Finished) then
        FSimulationThread.Terminate
      else
      begin
        FPreviousMessage := ContentMemo.Text;
        FSimulationThread := TSimulationThread.Create(True);
        FSimulationThread.FSleepTime := SimulationSpeedTrackBar.Position;
        FSimulationThread.FPlaySound := SoundCheckBox.Checked;
        FSimulationThread.FMessage := FPreviousMessage;
        FSimulationThread.FLorenzMachine := FLorenzMachine;
        FSimulationThread.Start;
      end;
    finally
      FLorenzMachine.Reset;
    end;
  end;
end;

{ ApplyPinDataButtonClick }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.ApplyPindataButtonClick(Sender: TObject);
var
  Validated : Boolean;
  APindata : TArray<Integer>;
  Index : Integer;
begin
  Validated := True;

  if (Length(PindataMemo.Text) <> 501) then
    Validated := False;

  if (not Validated) then
  begin
    ShowMessage('Invalid pindata, or an incorrect length. Please try again.');
    Exit;
  end
  else if (FSimulationThread <> nil) and (not FSimulationThread.Finished) then
   ShowMessage('Cannot change pindata during encryption/decryption.')
  else
  begin
    SetLength(APindata, 501);
    for Index := 0 to pred(Length(APindata)) do
      APindata[Index] := StrToInt(PindataMemo.Text[Index + 1]);

    FLorenzMachine.WheelCollection.ApplyPindata(APindata);
    FLorenzMachine.Reset;
    UpdateSimulationUI;
  end;
end;

{ ApplyRandomPindataButtonClick }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.ApplyRandomPindataButtonClick(Sender: TObject);
var
  APindata : TArray<Integer>;
  Index : Integer;
begin

  if (FSimulationThread <> nil) and (not FSimulationThread.Finished) then
  begin
    ShowMessage('Cannot change pindata during encryption/decryption.');
    Exit;
  end;

  Randomize();
  SetLength(APindata, 501);

  PindataMemo.Clear;
  for Index := 0 to pred(Length(APindata)) do
  begin
    APindata[Index] := RandomRange(0, 2);
    PindataMemo.Text := PindataMemo.Text + IntToStr(APindata[Index]);
  end;

  FLorenzMachine.WheelCollection.ApplyPindata(APindata);
  FLorenzMachine.Reset;
  UpdateSimulationUI;
end;

{ SetUpSimulationGrid }
{------------------------------------------------------------------------------}
procedure TLorenzSZ40Form.SetUpSimulationGridPanel;
var
  Index, Index2 : Integer;
  aLabel : TLabel;
begin
  if (not FFirstFocus) then
    Exit;

  FNameColor := clDkGray;
  FPreviousWheelsColor := clDkGray;
  FCurrentWheelsColor := clLime;
  FNextWheelsColor := clDkGray;
  FMiscColor := clLtGray;

  SimulationGridPanel.ColumnCollection.BeginUpdate;
  SimulationGridPanel.RowCollection.BeginUpdate;

  for Index := 0 to pred(SimulationGridPanel.ControlCount) do
    SimulationGridPanel.Controls[Index].Free;

  SimulationGridPanel.RowCollection.Clear;
  SimulationGridPanel.ColumnCollection.Clear;

  for Index := 0 to pred(FRowCount) do
  begin
    with SimulationGridPanel.RowCollection.Add do
    begin
      SizeStyle := ssPercent;
      Value := 100 / FRowCount; //have cells evenly distributed
    end;
  end;

  for Index := 0 to pred(FColCount) do
  begin
    with SimulationGridPanel.ColumnCollection.Add do
    begin
      SizeStyle := ssPercent;
      if (Index <> FBlankCol1) and (Index <> FBlankCol2) then
        Value := 100 / FColCount
      else if (Index = 7) or (Index = 8) then
        Value := 150 / FColCount
      else
        Value := 50 / FColCount;
    end;
  end;

  for Index := 0 to pred(FRowCount * FColCount) do
  begin
    aLabel := TLabel.Create(self);
    aLabel.Parent := SimulationGridPanel; //magic: place in the next empty cell
    aLabel.Visible := true;
    aLabel.Align := alClient;
    aLabel.Alignment := taCenter;
    aLabel.AlignWithMargins := True;
    aLabel.Font.Height := -17;
    aLabel.Font.Size := 13;
    aLabel.Layout := tlCenter;
    aLabel.AutoSize := True;
  end;

  for Index := 0 to FColCount do
  begin
    for Index2 := 0 to FRowCount do
    begin
      aLabel := TLabel(SimulationGridPanel.ControlCollection.Controls[Index, Index2]);

      // Ignore everything on blank rows...
      if (Assigned(aLabel)) and (Index <> FBlankCol1) and (Index <> FBlankCol2) then
      begin
        aLabel.Font.Color := FNameColor;
        if (Index2 = 2) then
          aLabel.Font.Style := [fsBold];

        case Index2 of
          // Set up the wheel name row...
          0:
          begin
            aLabel.Font.Color := FNameColor;
            if (Index > 0) and (Index < FBlankCol1) then
            begin
              aLabel.Caption := 'Ψ' + IntToStr(Index);
            end
            else if (Index = 7) then
            begin
              aLabel.Caption := 'M37';
            end
            else if (Index = 8) then
            begin
              aLabel.Caption := 'M61';
            end
            else if (Index > FBlankCol2) and (Index < pred(FColCount)) then
            begin
              aLabel.Caption := 'X' + IntToStr(Index - 9);
            end;
          end;
          1:
          begin
            if (Index = 0) or (Index = pred(FColCount)) then
            begin
              aLabel.Caption := '↑';
              aLabel.Font.Color := FMiscColor;
            end
            else
            begin
              aLabel.Font.Color := FPreviousWheelsColor;
            end;
          end;
          2:
          begin
            if (Index = 0) or (Index = pred(FColCount))  then
            begin
              aLabel.Caption := '-';
              aLabel.Font.Color := FMiscColor;
            end
            else
            begin

              if (Index <> 7) and (Index <> 8) then
                aLabel.Font.Color := FCurrentWheelsColor;

            end;
          end;
          3:
          begin
            if (Index = 0) or (Index = pred(FColCount))  then
            begin
              aLabel.Caption := '↑';
              aLabel.Font.Color := FMiscColor;
            end
            else
            begin
              aLabel.Font.Color := FNextWheelsColor;
            end;
          end;
        end;
      end;

    end;
  end;

  SimulationGridPanel.ColumnCollection.EndUpdate;
  SimulationGridPanel.RowCollection.EndUpdate;
end;

procedure TLorenzSZ40Form.UpdateSimulationUI(AMessage: String);
var
  ΨLineValue : TArray<Integer>;
  XLineValue : TArray<Integer>;
  M37Value : Integer;
  M61Value : Integer;
begin

  if (AMessage <> '') then
    ContentMemo.Text := AMessage;

  // Previous line row...
  ΨLineValue := FLorenzMachine.WheelCollection.WheelLine('Ψ', TLorenzWheelLinePosition.PREVIOUS);
  XLineValue := FLorenzMachine.WheelCollection.WheelLine('X', TLorenzWheelLinePosition.PREVIOUS);
  M37Value := FLorenzMachine.WheelCollection.Wheel('M37').PreviousWheelValue;
  M61Value := FLorenzMachine.WheelCollection.Wheel('M61').PreviousWheelValue;
  TLabel(SimulationGridPanel.ControlCollection.Controls[1, 1]).Caption := IntToStr(ΨLineValue[0]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[2, 1]).Caption := IntToStr(ΨLineValue[1]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[3, 1]).Caption := IntToStr(ΨLineValue[2]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[4, 1]).Caption := IntToStr(ΨLineValue[3]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[5, 1]).Caption := IntToStr(ΨLineValue[4]);

  TLabel(SimulationGridPanel.ControlCollection.Controls[7, 1]).Caption := IntToStr(M37Value);
  TLabel(SimulationGridPanel.ControlCollection.Controls[8, 1]).Caption := IntToStr(M61Value);

  TLabel(SimulationGridPanel.ControlCollection.Controls[10, 1]).Caption := IntToStr(XLineValue[0]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[11, 1]).Caption := IntToStr(XLineValue[1]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[12, 1]).Caption := IntToStr(XLineValue[2]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[13, 1]).Caption := IntToStr(XLineValue[3]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[14, 1]).Caption := IntToStr(XLineValue[4]);

  // Current line row...
  ΨLineValue := FLorenzMachine.WheelCollection.WheelLine('Ψ', TLorenzWheelLinePosition.CURRENT);
  XLineValue := FLorenzMachine.WheelCollection.WheelLine('X', TLorenzWheelLinePosition.CURRENT);
  M37Value := FLorenzMachine.WheelCollection.Wheel('M37').CurrentWheelValue;
  M61Value := FLorenzMachine.WheelCollection.Wheel('M61').CurrentWheelValue;
  TLabel(SimulationGridPanel.ControlCollection.Controls[1, 2]).Caption := IntToStr(ΨLineValue[0]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[2, 2]).Caption := IntToStr(ΨLineValue[1]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[3, 2]).Caption := IntToStr(ΨLineValue[2]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[4, 2]).Caption := IntToStr(ΨLineValue[3]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[5, 2]).Caption := IntToStr(ΨLineValue[4]);

  TLabel(SimulationGridPanel.ControlCollection.Controls[7, 2]).Caption := IntToStr(M37Value);
  if (M37Value = 0) then
    TLabel(SimulationGridPanel.ControlCollection.Controls[7, 2]).Font.Color := FPreviousWheelsColor
  else
    TLabel(SimulationGridPanel.ControlCollection.Controls[7, 2]).Font.Color := FCurrentWheelsColor;

  TLabel(SimulationGridPanel.ControlCollection.Controls[8, 2]).Caption := IntToStr(M61Value);
  if (M61Value = 0) then
    TLabel(SimulationGridPanel.ControlCollection.Controls[8, 2]).Font.Color := FPreviousWheelsColor
  else
    TLabel(SimulationGridPanel.ControlCollection.Controls[8, 2]).Font.Color := FCurrentWheelsColor;

  TLabel(SimulationGridPanel.ControlCollection.Controls[10, 2]).Caption := IntToStr(XLineValue[0]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[11, 2]).Caption := IntToStr(XLineValue[1]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[12, 2]).Caption := IntToStr(XLineValue[2]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[13, 2]).Caption := IntToStr(XLineValue[3]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[14, 2]).Caption := IntToStr(XLineValue[4]);

  // Next line row...
  ΨLineValue := FLorenzMachine.WheelCollection.WheelLine('Ψ', TLorenzWheelLinePosition.NEXT);
  XLineValue := FLorenzMachine.WheelCollection.WheelLine('X', TLorenzWheelLinePosition.NEXT);
  M37Value := FLorenzMachine.WheelCollection.Wheel('M37').NextWheelValue;
  M61Value := FLorenzMachine.WheelCollection.Wheel('M61').NextWheelValue;
  TLabel(SimulationGridPanel.ControlCollection.Controls[1, 3]).Caption := IntToStr(ΨLineValue[0]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[2, 3]).Caption := IntToStr(ΨLineValue[1]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[3, 3]).Caption := IntToStr(ΨLineValue[2]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[4, 3]).Caption := IntToStr(ΨLineValue[3]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[5, 3]).Caption := IntToStr(ΨLineValue[4]);

  TLabel(SimulationGridPanel.ControlCollection.Controls[7, 3]).Caption := IntToStr(M37Value);
  TLabel(SimulationGridPanel.ControlCollection.Controls[8, 3]).Caption := IntToStr(M61Value);

  TLabel(SimulationGridPanel.ControlCollection.Controls[10, 3]).Caption := IntToStr(XLineValue[0]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[11, 3]).Caption := IntToStr(XLineValue[1]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[12, 3]).Caption := IntToStr(XLineValue[2]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[13, 3]).Caption := IntToStr(XLineValue[3]);
  TLabel(SimulationGridPanel.ControlCollection.Controls[14, 3]).Caption := IntToStr(XLineValue[4]);
end;

function TLorenzSZ40Form.CalculateMaxSize(aCanvas: TCanvas; aText: string; aWidth, aHeight: Integer): Integer;

  function LargestFontSizeToFitWidth(aCanvas: TCanvas; aText: string; aWidth: Integer): Integer;
  var
    Font: TFont;
    FontRecall: TFontRecall;
    InitialTextWidth: Integer;
  begin
    Font := aCanvas.Font;
    Result := Font.Size;
    FontRecall := TFontRecall.Create(Font);
    try
      InitialTextWidth := aCanvas.TextWidth(aText);
      Font.Size := MulDiv(Font.Size, aWidth, InitialTextWidth);

      if InitialTextWidth < aWidth then
        while True do
        begin
          Font.Size := Font.Size + 1;
          if aCanvas.TextWidth(aText) > aWidth then
            exit(Font.Size - 1);
        end;

      if InitialTextWidth > aWidth then
      begin
        while True do
        begin
          Font.Size := Font.Size - 1;
        if aCanvas.TextWidth(aText) <= aWidth then
          exit(Font.Size);
        end;
      end;
    finally
      FontRecall.Free;
    end;
  end;

  function LargestFontSizeToFitHeight(aCanvas: TCanvas; aText: string; aHeight: Integer): Integer;
  var
    Font: TFont;
    FontRecall: TFontRecall;
    InitialTextHeight: Integer;
  begin
    aHeight := aHeight;
    Font := aCanvas.Font;
    Result := Font.Size;
    FontRecall := TFontRecall.Create(Font);
    try
      InitialTextHeight := aCanvas.TextHeight(aText);
      Font.Size := MulDiv(Font.Size, aHeight, InitialTextHeight);

      if InitialTextHeight < aHeight then
        while True do
        begin
          Font.Size := Font.Size + 1;
          if aCanvas.TextHeight(aText) > aHeight then
            exit(Font.Size - 1);
        end;

      if InitialTextHeight > aHeight then
        while True do
        begin
          Font.Size := Font.Size - 1;
          if aCanvas.TextHeight(aText) <= aHeight then
            exit(Font.Size);
        end;

    finally
      FontRecall.Free;
    end;
  end;

begin
  if aText <> '' then
    Result := Min(LargestFontSizeToFitWidth(aCanvas, aText, aWidth),
                  LargestFontSizeToFitHeight(aCanvas, aText, aHeight)) - 4
  else
    Result := aCanvas.Font.Size - 4;
end;

end.
