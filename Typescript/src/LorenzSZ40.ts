import * as configJSON from './Config.json';

class LorenzCharacter {
  private _ascii: string;
  private _baudot: number[];

  constructor(ascii: string, baudot: number[]) {
    this.ascii = ascii;
    this.baudot = baudot;
  }

  get ascii(): string {
    return this._ascii;
  }

  set ascii(ascii: string) {
    this._ascii = ascii;
  }

  get baudot(): number[] {
    return this._baudot;
  }

  set baudot(baudot: number[]) {
    this._baudot = baudot;
  }
}




class LorenzBaudotASCIITools {
  private lorenzCharacters: LorenzCharacter[];

  constructor() {
    this.lorenzCharacters = [];
    var tempBaudotValues: number[];
    for (var i = 0; i < configJSON.characters.character.length; i++) {
      tempBaudotValues = [
        parseInt(configJSON.characters.character[i].baudot[0]),
        parseInt(configJSON.characters.character[i].baudot[1]),
        parseInt(configJSON.characters.character[i].baudot[2]),
        parseInt(configJSON.characters.character[i].baudot[3]),
        parseInt(configJSON.characters.character[i].baudot[4]),
      ];
      this.lorenzCharacters.push(
        new LorenzCharacter(configJSON.characters.character[i].ascii, tempBaudotValues)
      );
    }
  }

  ConvertASCIIToBaudot(asciiValue: string): number[] {
    for (var i = 0; i < this.lorenzCharacters.length; i++) {
      if (this.lorenzCharacters[i].ascii == asciiValue) {
        return this.lorenzCharacters[i].baudot;
      }
    }
    return [0, 0, 0, 0, 0];
  }

  ConvertBaudotToASCII(baudotValue: number[]): string {
    for (var i = 0; i < this.lorenzCharacters.length; i++) {
      var match: boolean = true;
      for (var j = 0; j < this.lorenzCharacters[i].baudot.length; j++) {
        if (this.lorenzCharacters[i].baudot[j] != baudotValue[j]) {
          match = false;
        }
      }
      if (match == true) {
        return this.lorenzCharacters[i].ascii;
      }
    }
    return 'n';
  }
}




class LorenzWheel {
  private maxSize: number;
  private _wheelName: string;
  private _wheelNumber: number;
  private _currentPosition: number;
  private _pinData: number[];
  private WHEEL_1_SIZE: number = 43;
  private WHEEL_2_SIZE: number = 47;
  private WHEEL_3_SIZE: number = 51;
  private WHEEL_4_SIZE: number = 53;
  private WHEEL_5_SIZE: number = 59;
  private WHEEL_6_SIZE: number = 37;
  private WHEEL_7_SIZE: number = 61;
  private WHEEL_8_SIZE: number = 41;
  private WHEEL_9_SIZE: number = 31;
  private WHEEL_10_SIZE: number = 29;
  private WHEEL_11_SIZE: number = 26;
  private WHEEL_12_SIZE: number = 23;
  public DEFAULT_INITIAL_POSITION: number = 1;

  constructor(wheelName: string, wheelNumber: number, pinData: number[]) {
    this.maxSize = 0;
    this.wheelName = wheelName;
    this.wheelNumber = wheelNumber;
    this.pinData = pinData;
    this.reset();
  }

  get wheelName(): string {
    return this._wheelName;
  }

  set wheelName(wheelName: string) {
    this._wheelName = wheelName;
  }

  get wheelNumber(): number {
    return this._wheelNumber;
  }

  set wheelNumber(wheelNumber: number) {
    this._wheelNumber = wheelNumber;
  }

  get wheelPosition(): number {
    return this._currentPosition;
  }

  set wheelPosition(wheelPosition: number) {
    this._currentPosition = wheelPosition;
  }

  get pinData(): number[] {
    return this._pinData
  }

  set pinData(pinData: number[]) {
    this.setPinData(pinData);
  }

  get previousWheelValue(): number {
    switch (this.wheelPosition) {
      case 1: return this.pinData[this.maxSize - 1]; break;
      default: return this.pinData[this.wheelPosition - 2]; break;
    }
  }

  get currentWheelValue(): number {
    return this.pinData[this.wheelPosition - 1]
  }

  get nextWheelValue(): number {
    switch (this.wheelPosition) {
      case this.maxSize: return this.pinData[0];
      default: return this.pinData[this._currentPosition];
    }
  }

  rotate() {
    if (this.wheelPosition < this.maxSize) {
      this.wheelPosition += 1;
    } else {
      this.wheelPosition = 1;
    }
  }

  reset() {
    this.wheelPosition = this.DEFAULT_INITIAL_POSITION;
  }

  setPinData(newPinData: number[]) {
    var counter: number;
    var startPosition: number;
    switch (this.wheelNumber) {
      case 1:
        counter = this.WHEEL_1_SIZE;
        startPosition = 0;
        break;
      case 2:
        counter = this.WHEEL_2_SIZE;
        startPosition = 43;
        break;
      case 3:
        counter = this.WHEEL_3_SIZE;
        startPosition = 90;
        break;
      case 4:
        counter = this.WHEEL_4_SIZE;
        startPosition = 141;
        break;
      case 5:
        counter = this.WHEEL_5_SIZE;
        startPosition = 194;
        break;
      case 6:
        counter = this.WHEEL_6_SIZE;
        startPosition = 253;
        break;
      case 7:
        counter = this.WHEEL_7_SIZE;
        startPosition = 290;
        break;
      case 8:
        counter = this.WHEEL_8_SIZE;
        startPosition = 351;
        break;
      case 9:
        counter = this.WHEEL_9_SIZE;
        startPosition = 392;
        break;
      case 10:
        counter = this.WHEEL_10_SIZE;
        startPosition = 423;
        break;
      case 11:
        counter = this.WHEEL_11_SIZE;
        startPosition = 452;
        break;
      case 12:
        counter = this.WHEEL_12_SIZE;
        startPosition = 478;
        break;
      default:
        counter = 0;
        startPosition = 0;
        break
    }

    this._pinData = [];
    for (var i = 0; i < counter; i++) {
      this._pinData.push(newPinData[i + startPosition]);
    }
    this.maxSize = counter;
  }
}



class LorenzWheelCollection {
  private _wheels: LorenzWheel[];
  private wheelNames: string[] = ['Ψ1', 'Ψ2', 'Ψ3', 'Ψ4', 'Ψ5', 'M37', 'M61', 'X1', 'X2', 'X3', 'X4', 'X5'];

  constructor() {
    this.wheels = [];
    var pinData: number[] = [];
    for (var i = 0; i < configJSON.pindata.length; i++) {
      pinData.push(parseInt(configJSON.pindata[i]));
    }

    for (var i = 0; i < 12; i++) {
      this.wheels.push(new LorenzWheel(this.wheelNames[i], i + 1, pinData));
    }
    this.reset();
  }

  get wheels(): LorenzWheel[] {
    return this._wheels;
  }

  set wheels(wheels: LorenzWheel[]) {
    this._wheels = wheels;
  }

  wheel(wheelParameter: number | string): LorenzWheel {
    if (typeof (wheelParameter) == 'number') {
      for (let wheel of this.wheels) {
        if (wheel.wheelNumber == wheelParameter) {
          return wheel;
        }
      }
    } else {
      for (let wheel of this.wheels) {
        if (wheel.wheelName == wheelParameter) {
          return wheel;
        }
      }
    }
    return this.wheels[0];
  }

  reset() {
    for (let wheel of this.wheels) {
      wheel.reset();
    }
  }

  update(rotate: boolean) {
    if (rotate) {
      this.wheel('X1').rotate();
      this.wheel('X2').rotate();
      this.wheel('X3').rotate();
      this.wheel('X4').rotate();
      this.wheel('X5').rotate();

      if (this.wheel('M61').previousWheelValue == 1) {
        this.wheel('M37').rotate();
      }

      this.wheel('M61').rotate;

      if (this.wheel(6).previousWheelValue == 1) {
        this.wheel('Ψ1').rotate();
        this.wheel('Ψ2').rotate();
        this.wheel('Ψ3').rotate();
        this.wheel('Ψ4').rotate();
        this.wheel('Ψ5').rotate();
      }
    }
  }
}



class LorenzMachine {
  private wheelCollection: LorenzWheelCollection;
  private convertionTools: LorenzBaudotASCIITools;

  constructor(message: string = '') {
    this.wheelCollection = new LorenzWheelCollection();
    this.convertionTools = new LorenzBaudotASCIITools();

    if (message != '') {
      console.log(this.encryptDecrypt(message));
      this.reset();
    }
  }

  encryptDecrypt(message: string): string {
    var encryptedText: string = '';
    var wheelVals: number[] = [];
    var keyword: number[] = [];
    var encrypted: number[] = [];
    message = message.toLowerCase();

    this.wheelCollection.update(false);
    for (var i = 0; i < message.length; i++) {
      wheelVals = [];
      keyword = [];
      encrypted = [];
      var currentCharInBaudot = this.convertionTools.ConvertASCIIToBaudot(message[i]);

      for (var j = 0; j < 5; j++) {
        wheelVals.push(currentCharInBaudot[j]);
      }

      for (var j = 0; j < 5; j++) {
        if ((wheelVals[j] ^ this.wheelCollection.wheel(j + 8).currentWheelValue)) {
          keyword.push(1);
        } else {
          keyword.push(0);
        }
      }

      for (var j = 0; j < 5; j++) {
        if ((keyword[j] ^ this.wheelCollection.wheel(j + 1).currentWheelValue)) {
          encrypted.push(1);
        } else {
          encrypted.push(0);
        }
      }

      encryptedText += this.convertionTools.ConvertBaudotToASCII(
        [encrypted[0], encrypted[1], encrypted[2], encrypted[3], encrypted[4]]
      );

      this.wheelCollection.update(true);
    }

    return encryptedText;
  }

  reset() {
    this.wheelCollection.reset();
  }

}


// This sets up the Node version of the program specifically...
class NodeInit {
  generateRandomString(length: number) {
    var text = "";
    var possible = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (var i = 0; i < length; i++)
      text += possible.charAt(Math.floor(Math.random() * possible.length));

    return text;
  }

  constructor(argv : string[]) {
    var lorenzMachine: LorenzMachine = new LorenzMachine();
    var argumentMode: boolean = true;
    var message: string = '';
    if (argv[2] != undefined) {
      message += argv[2];
      for (var i = 3; i < argv.length; i++) {
        message += " " + argv[i];
      }
    } else {
      argumentMode = false;
    }

    if (!argumentMode) {
      console.log('Lorenz SZ40 Cipher Machine');
      console.log('Generating random message...');
      console.log(lorenzMachine.encryptDecrypt(this.generateRandomString(9999999)));
    } else {
      console.log(lorenzMachine.encryptDecrypt(message));
    }

    lorenzMachine.reset;
  }
}

// Start the Node main menu loop...
var init = new NodeInit(process.argv);
