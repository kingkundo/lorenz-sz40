program LorenzSZ40CipherMachine;

uses
  Vcl.Forms,
  LorenzSZ40 in 'LorenzSZ40.pas' {LorenzSZ40Form},
  LorenzWheel in 'LorenzWheel.pas',
  LorenzWheelCollection in 'LorenzWheelCollection.pas',
  LorenzMachine in 'LorenzMachine.pas',
  LorenzTools in 'LorenzTools.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TLorenzSZ40Form, LorenzSZ40Form);
  Application.Run;
end.
