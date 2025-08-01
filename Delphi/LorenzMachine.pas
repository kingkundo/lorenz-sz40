unit LorenzMachine;

interface

uses
  SysUtils,
  XMLIntf,
  XMLDoc,
  LorenzWheelCollection,
  LorenzTools;

type
  TLorenzMachine = class
  private
    { Private declarations }
    FWheelCollection : TLorenzWheelCollection;
    FConvertionTools : TLorenzTools;
  public
    { Public declarations }
    constructor Create;
    destructor Destroy; override;
    function EncryptDecrypt(EMessage : string) : string;
    property WheelCollection : TLorenzWheelCollection read FWheelCollection;
    procedure Reset;
  end;

implementation

{ Constructor }
{------------------------------------------------------------------------------}
constructor TLorenzMachine.Create;
var
  Doc: IXMLDocument;
  Data, XMLNode, ASCIINode, BaudotNode: IXMLNode;
  Index, Index2, Index3 : Integer;
  PinData, BaudotData : TArray<Integer>;
  CharactersData : TArray<TLorenzCharacter>;
begin
  Doc := LoadXMLDocument('LorenzMachineConfig.xml');
  Data := Doc.DocumentElement;

  for Index := 0 to pred(Data.ChildNodes.Count) do
  begin
    XMLNode := Data.ChildNodes[Index];
    if (XMLNode.NodeName = 'pindata') then
    begin
      SetLength(PinData, pred(Length(XMLNode.Text)));
      for Index2 := 0 to pred(Length(XMLNode.Text)) do
        begin
          PinData[Index2] := StrToInt(XMLNode.Text.Chars[Index2]);
        end;
        FWheelCollection := TLorenzWheelCollection.Create(PinData);
      end

    else if (XMLNode.NodeName = 'characters') then
    begin
      SetLength(CharactersData, XMLNode.ChildNodes.Count);
      for Index2 := 0 to pred(XMLNode.ChildNodes.Count) do
      begin
        BaudotNode := XMLNode.ChildNodes[Index2].ChildNodes[0];
        ASCIINode := XMLNode.ChildNodes[Index2].ChildNodes[1];
        if (ASCIINode <> nil) and (BaudotNode <> nil) then
        begin
          SetLength(BaudotData, 5);
          for Index3 := 0 to 4 do
          begin
            BaudotData[Index3] := StrToInt(BaudotNode.Text.Chars[Index3]);
          end;
          if (ASCIINode.Text.Chars[0] = '_') then
            CharactersData[Index2] := TLorenzCharacter.Create(' ', BaudotData)
          else
            CharactersData[Index2] := TLorenzCharacter.Create(ASCIINode.Text.Chars[0], BaudotData);
        end;
      end;
      FConvertionTools := TLorenzTools.Create(CharactersData);
    end;
  end;
end;

{ Destructor }
{------------------------------------------------------------------------------}
destructor TLorenzMachine.Destroy;
begin
  Reset;
  FreeAndNil(FWheelCollection);
  FreeAndNil(FConvertionTools);
  inherited;
end;

{ EncryptDecrypt }
{------------------------------------------------------------------------------}
function TLorenzMachine.EncryptDecrypt(EMessage : string) : string;
var
  AMessage, EncryptedMessage : TArray<Char>;
  WheelVals, Keyword, Encrypted, CurrentCharInBaudot : TArray<Integer>;
  Index, Index2 : Integer;

  { ArrayToString }
  {----------------------------------------------------------------------------}
  function ArrayToString(const a: array of Char): string;
  begin
  if Length(a)>0 then
    SetString(Result, PChar(@a[0]), Length(a))
  else
    Result := '';
  end;

begin
  SetLength(EncryptedMessage, EMessage.Length);
  SetLength(WheelVals, 5);
  SetLength(Keyword, 5);
  SetLength(Encrypted, 5);
  AMessage := AnsiLowerCase(EMessage).toCharArray;

  FWheelCollection.Update(False);

  for Index := 0 to pred(Length(AMessage)) do
  begin
    CurrentCharInBaudot := FConvertionTools.ConvertASCIIToBaudot(AMessage[Index]);

    for Index2 := 0 to 4 do
    begin
      WheelVals[Index2] := CurrentCharInBaudot[Index2];
    end;

    for Index2 := 0 to 4 do
    begin
      if ((WheelVals[Index2] xor WheelCollection.Wheel(Index2 + 8).CurrentWheelValue) = 1) then
        Keyword[Index2] := 1
      else
        Keyword[Index2] := 0;
    end;

    for Index2 := 0 to 4 do
    begin
      if ((Keyword[Index2] xor WheelCollection.Wheel(Index2 + 1).CurrentWheelValue) = 1) then
        Encrypted[Index2] := 1
      else
        Encrypted[Index2] := 0;
    end;

    EncryptedMessage[Index] := FConvertionTools.ConvertBaudotToASCII(
      [Encrypted[0],Encrypted[1],Encrypted[2], Encrypted[3], Encrypted[4]]);

    FWheelCollection.Update(True);
  end;

  Result := ArrayToString(EncryptedMessage);

end;

{ Reset }
{------------------------------------------------------------------------------}
procedure TLorenzMachine.Reset;
begin
  WheelCollection.Reset;
end;


end.
