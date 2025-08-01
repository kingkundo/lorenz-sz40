unit LorenzTools;

interface

type
  TLorenzCharacter = class
  private
    FAscii : Char;
    FBaudot : TArray<Integer>;
  public
    constructor Create(AAscii: Char; ABaudot: TArray<Integer>);
    property ASCII : Char read FAscii write FAscii;
    property Baudot : TArray<Integer> read FBaudot write FBaudot;
  end;

  TLorenzTools = class
  private
    FCharacters : TArray<TLorenzCharacter>;
  public
    constructor Create(ACharacters: TArray<TLorenzCharacter>);
    function ConvertASCIIToBaudot(AAsciiValue: Char): TArray<Integer>;
    function ConvertBaudotToASCII(ABaudotValue: TArray<Integer>): Char;
    property Characters : TArray<TLorenzCharacter> read FCharacters write FCharacters;
  end;

implementation

{ TLorenzCharacter }
{------------------------------------------------------------------------------}

{ Constructor }
{------------------------------------------------------------------------------}
constructor TLorenzCharacter.Create(AAscii: Char; ABaudot: TArray<System.Integer>);
begin
  ASCII := AAscii;
  Baudot := ABaudot;
end;

{ TLorenzTools }
{------------------------------------------------------------------------------}

{ Constructor }
{------------------------------------------------------------------------------}
constructor TLorenzTools.Create(ACharacters: TArray<TLorenzCharacter>);
begin
  Characters := ACharacters;
end;

{ ConvertASCIIToBaudot }
{------------------------------------------------------------------------------}
function TLorenzTools.ConvertASCIIToBaudot(AAsciiValue: Char): TArray<Integer>;
var
  Index : Integer;
begin
  for Index := Low(Characters) to High(Characters) do
  begin
    if (Characters[Index].ASCII = AAsciiValue) then
    begin
      Result := Characters[Index].Baudot;
    end;
  end;
end;

{ ConvertBaudotToASCII }
{------------------------------------------------------------------------------}
function TLorenzTools.ConvertBaudotToASCII(ABaudotValue: TArray<Integer>): Char;
var
  Index, Index2 : Integer;
  Match : Boolean;
begin
  Result := 'n';
  for Index := Low(Characters) to High(Characters) do
  begin
    Match := True;
    for Index2 := Low(Characters[Index].Baudot) to High(Characters[Index].Baudot) do
    begin
      if (Characters[Index].Baudot[Index2] <> ABaudotValue[Index2]) then
        Match := False;
    end;
    if (Match) then
      Result := Characters[Index].ASCII;
  end;
    
end;


end.
