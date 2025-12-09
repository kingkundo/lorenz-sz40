unit LorenzWheelCollection;

interface

uses
  SysUtils,
  StrUtils,
  LorenzWheel;

type
  TLorenzWheelCollection = class
  private
    FWheels: TArray<TLorenzWheel>;
    WHEEL_NAMES : TArray<String>;
    FPinData : TArray<Integer>;
  public
    constructor Create(APinData : TArray<Integer>);
    destructor Destroy; override;
    procedure Update(ARotate : Boolean);
    procedure Reset;
    procedure ApplyPindata(APindata: TArray<Integer>);
    function Wheel(AWheelName : String) : TLorenzWheel; overload;
    function Wheel(AWheelNumber : Integer) : TLorenzWheel; overload;
    function WheelLine(ALineName: string; ALinePosition: TLorenzWheelLinePosition) : TArray<Integer>;
    property Pindata : TArray<Integer> read FPinData write ApplyPinData;
    property Wheels : TArray<TLorenzWheel> read FWheels write FWheels;
  end;

implementation

{ Constructor }
{------------------------------------------------------------------------------}
constructor TLorenzWheelCollection.Create(APinData: TArray<Integer>);
var
  Index : Integer;
begin
  WHEEL_NAMES := TArray<String>.Create('Ψ1','Ψ2','Ψ3','Ψ4','Ψ5','M37','M61','X1','X2','X3','X4','X5');
  FPinData := APinData;

  SetLength(FWheels, Length(WHEEL_NAMES));
  for Index := 0 to pred(Length(WHEEL_NAMES)) do
    Wheels[Index] := TLorenzWheel.Create(WHEEL_NAMES[Index], Index + 1, FPinData);
    
  Reset;
end;

{ Destructor }
{------------------------------------------------------------------------------}
destructor TLorenzWheelCollection.Destroy;
var
  Index : Integer;
begin
  for Index := 0 to pred(Length(FWheels)) do
  begin
    FreeAndNil(FWheels[Index]);
  end;

  SetLength(FWheels, 0);
  inherited;
end;

{ ApplyPindata }
{------------------------------------------------------------------------------}
procedure TLorenzWheelCollection.ApplyPindata(APindata: TArray<Integer>);
var
  Index : Integer;
begin
  for Index := 0 to pred(Length(FWheels)) do
    FWheels[Index].PinData := APindata;

  FPindata := APindata;
end;

{ Wheel }
{------------------------------------------------------------------------------}
function TLorenzWheelCollection.Wheel(AWheelName : String) : TLorenzWheel;
var
  Index : Integer;
begin
  Result := nil;
  for Index := 0 to pred(Length(Wheels)) do
    if (Wheels[Index].WheelName = AWheelName) then
    begin
      Result := Wheels[Index];
      exit;
    end;
end;

{------------------------------------------------------------------------------}
function TLorenzWheelCollection.Wheel(AWheelNumber : Integer) : TLorenzWheel;
var
  Index : Integer;
begin
  Result := nil;
  for Index := 0 to pred(Length(Wheels)) do
    if (Wheels[Index].WheelNumber = AWheelNumber) then
    begin
      Result := Wheels[Index];
      exit;
    end;
end;

{ WheelLine }
{------------------------------------------------------------------------------}
function TLorenzWheelCollection.WheelLine(ALineName: string; ALinePosition: TLorenzWheelLinePosition) : TArray<Integer>;
var
  Index, Index2 : Integer;
  LineArray : TArray<Integer>;
begin
  Index2 := 0;
  SetLength(LineArray, Length(Wheels));
  for Index := 0 to pred(Length(Wheels)) do
  begin
    if ContainsText(Wheels[Index].WheelName, ALineName) then
    begin
      LineArray[Index2] := Wheels[Index].GetWheelValue(ALinePosition);
      Index2 := Index2 + 1;
    end;
  end;
  SetLength(LineArray, Index2);
  Result := LineArray;
end;

{ Update }
{ The fastest update method. Accesses wheel arrays directly. }
{------------------------------------------------------------------------------}
procedure TLorenzWheelCollection.Update(ARotate : Boolean);
begin
  if (ARotate) then
  begin
    Wheels[0].Rotate;
    Wheels[1].Rotate;
    Wheels[2].Rotate;
    Wheels[3].Rotate;
    Wheels[4].Rotate;

    if (Wheels[6].PreviousWheelValue = 1) then
      Wheels[5].Rotate;

    Wheels[6].Rotate;

    if (Wheels[5].PreviousWheelValue = 1) then
    begin
      Wheels[7].Rotate;
      Wheels[8].Rotate;
      Wheels[9].Rotate;
      Wheels[10].Rotate;
      Wheels[11].Rotate;
    end;
  end;
end;

{ Reset }
{------------------------------------------------------------------------------}
procedure TLorenzWheelCollection.Reset;
var
  Index : Integer;
begin
  for Index := 0 to pred(Length(Wheels)) do
    Wheels[Index].Reset;
end;


end.
