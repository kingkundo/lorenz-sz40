unit LorenzWheel;

interface

type
  TLorenzWheelLinePosition = (PREVIOUS, CURRENT, NEXT);

  TLorenzWheel = class
  private
    FWheelName : String;
    FMaxSize, FWheelNumber, FInitialPosition, FCurrentPosition : Integer;
    FPinData: TArray<Integer>;

    const DEFAULT_INITIAL_POSITION: Integer = 1;
    function GetPreviousWheelValue : Integer;
    function GetCurrentWheelValue : Integer;
    function GetNextWheelValue : Integer;
    procedure SetPinData(APinData : TArray<Integer>);

  public
    constructor Create(AWheelName : String; AWheelNumber : Integer; APinData : TArray<Integer>);

    procedure Rotate;
    procedure Reset;

    function GetWheelValue(aLinePosition : TLorenzWheelLinePosition): Integer;

    property InitialPosition : Integer read FInitialPosition write FInitialPosition;
    property WheelName : String read FWheelName write FWheelName;
    property WheelNumber : Integer read FWheelNumber write FWheelNumber;
    property WheelPosition : Integer read FCurrentPosition write FCurrentPosition;
    property PreviousWheelValue : Integer read GetPreviousWheelValue;
    property CurrentWheelValue : Integer read GetCurrentWheelValue;
    property NextWheelValue : Integer read GetNextWheelValue;
    property PinData : TArray<Integer> read FPinData write SetPinData;
  end;

implementation

const
  LORENZ_WHEEL_SIZES: array of Integer = [43, 47, 51, 53, 59, 37, 61, 41, 31, 29, 26, 23];
  LORENZ_WHEEL_START_POSITIONS: array of Integer = [0, 43, 90, 141, 194, 253, 290, 351, 392, 423, 452, 478];

{ Constructor }
{------------------------------------------------------------------------------}
constructor TLorenzWheel.Create(AWheelName : String; AWheelNumber : Integer; APinData : TArray<Integer>);
begin
  FMaxSize := 1;
  WheelName := AWheelName;
  WheelNumber := AWheelNumber;
  WheelPosition := DEFAULT_INITIAL_POSITION;
  PinData := APinData;
  Reset;
end;

{ SetPinSettings }
{------------------------------------------------------------------------------}
procedure TLorenzWheel.SetPinData(APinData: TArray<Integer>);
var
  ACounter, AStartPos, Index : Integer;

begin
  ACounter := LORENZ_WHEEL_SIZES[pred(WheelNumber)];
  AStartPos := LORENZ_WHEEL_START_POSITIONS[pred(WheelNumber)];

  SetLength(FPinData, ACounter);
  for Index := 0 to pred(ACounter) do
    PinData[Index] := APinData[Index + AStartPos];

  FMaxSize := ACounter;
end;

{ GetWheelValue }
{------------------------------------------------------------------------------}
function TLorenzWheel.GetWheelValue(aLinePosition : TLorenzWheelLinePosition): Integer;
begin
  Result := -1;
  case (aLinePosition) of
    PREVIOUS: Result := GetPreviousWheelValue;
    CURRENT: Result := GetCurrentWheelValue;
    NEXT: Result := GetNextWheelValue;
  end;
end;

{ GetPreviousWheelValue }
{------------------------------------------------------------------------------}
function TLorenzWheel.GetPreviousWheelValue : Integer;
begin
  case WheelPosition of
    1: Result := PinData[FMaxSize - 1];
  else
    Result := PinData[WheelPosition - 2];
  end;
end;

{ GetCurrentWheelValue }
{------------------------------------------------------------------------------}
function TLorenzWheel.GetCurrentWheelValue : Integer;
begin
  Result := PinData[WheelPosition - 1];
end;

{ GetNextWheelValue }
{------------------------------------------------------------------------------}
function TLorenzWheel.GetNextWheelValue : Integer;
begin
  if (WheelPosition = FMaxSize) then
    Result := PinData[0]
  else
    Result := PinData[WheelPosition];
end;

{ Rotate }
{------------------------------------------------------------------------------}
procedure TLorenzWheel.Rotate;
begin
  if (WheelPosition < FMaxSize) then
    WheelPosition := WheelPosition + 1
  else
    WheelPosition := 1;
end;

{ Reset }
{------------------------------------------------------------------------------}
procedure TLorenzWheel.Reset;
begin
  WheelPosition := DEFAULT_INITIAL_POSITION;
end;

end.
