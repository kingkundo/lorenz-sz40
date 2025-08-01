/*

      Tom Taylor - 2013

	  Baudot Class.
	  Creates a Baudot object that will convert between ASCII
	  and Baudot-Murray ITA2 code.

	  int pointer* baudotdata holds all baudot characters in 5
	  bit spaces.

	                                                               */


#include "StdAfx.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::stringstream;

// Default constructor.
Baudot::Baudot()
{ 
	// Creates the array to the size of the bits
	// that denote baudot code.
	baudotdata = new int [160];
	
	// Baudot data now contained here, no need to load in the data.
	// Note: New baudot data can be added using loadBaudotData(string)
	baudottext = "0000000100101111001100001010101000010101001110011011000101100001100101010010110111010101000101101111100101000111101011101111011001011001110001000000101101111111";
	
	// convert the string to an int array.
	for ( int i = 0; i < 160; i++ )
	{
		stringstream newstream;
		newstream << baudottext[i];
		newstream >> baudotdata[i];
	}

	currentChiChar = 'n'; 
}

// Destructor.
Baudot::~Baudot() { delete[] baudotdata; }

// Loads in baudot data in a binary form to be compared with machine data later.
int Baudot::loadBaudotData( string name )
{
	// Creates the array to the size of the bits
	// that denote baudot code.
	baudotdata = new int [160];
	
	// Baudot data now contained here, no need to load in the data.
	baudottext = name;
	
	// convert the string to an int array.
	for ( int i = 0; i < 160; i++ )
	{
		stringstream newstream;
		newstream << baudottext[i];
		newstream >> baudotdata[i];
	}

	return 0;


	//ifstream newPinSettingsopen ( "baudot.dat" );

	//// If the baudot settings were loaded:
	//if ( newPinSettingsopen.is_open())
	//{		
	// This line is unnecessary but can be used if wanted.
	// Maybe used in future to load in alternative baudot data?
	//getline( newPinSettingsopen, baudottext ); // Place the baudot settings in memory.

	//	// convert the string to an int array.
	//	for ( int i = 0; i < 160; i++ )
	//	{
	//		stringstream newstream;
	//		newstream << baudottext[i];
	//		newstream >> baudotdata[i];
	//	}

	//	newPinSettingsopen.close();
	//	return 0;
	//}

	//// If the pin settings weren't loaded:
	//else cout << "                      Unable to find baudot.dat" << endl;
	//     cout << "                      Please place the file in the same" << endl;
	//	 cout << "                      folder as this executable..." << endl << endl;
	//	 cout << "                      ";
	//	 return 1; // Return 1 and subsequently close.


}

// Sets baudot data from inside the machine rather than loading it in externally.
void Baudot::setBaudotData(string newBaudotValue)
{
	// Creates the array to the size of the bits
	// that denote baudot code.
	baudotdata = new int [160];
	
	// Baudot data now contained here, no need to load in the data.
	baudottext = newBaudotValue;
	
	// convert the string to an int array.
	for ( int i = 0; i < 160; i++ )
	{
		stringstream newstream;
		newstream << baudottext[i];
		newstream >> baudotdata[i];
	}
}

// Gets the value in the array of baudot data using a for loop.
int Baudot::getBaudotData(int count)
{
	return baudotdata[count];
}

// Converts an ASCII char to a baudot binary sequence.
// Note: It ignores capitalisation.
string Baudot::convertToBaudot( char charToConvert )
{
	// Default string is a shell.
	string newbaudot = "00000";

	// If char is a star:
	if ( charToConvert == '*' )
	{
		return "00000"; // Return the value in baudot in a string.
	}

	else if ( charToConvert == ' ' )
	{
		return "00100";
	}

	else if ( charToConvert == 'q' || charToConvert == 'Q' )
	{
		return "10111";
	}

	else if ( charToConvert == 'w' || charToConvert == 'W' )
	{
		return "10011";
	}

	else if ( charToConvert == 'e' || charToConvert == 'E' )
	{
		return "00001";
	}

	else if ( charToConvert == 'r' || charToConvert == 'R' )
	{
		return "01010";
	}

	else if ( charToConvert == 't' || charToConvert == 'T' )
	{
		return "10000";
	}

	else if ( charToConvert == 'y' || charToConvert == 'Y' )
	{
		return "10101";
	}

	else if ( charToConvert == 'u' || charToConvert == 'U' )
	{
		return "00111";
	}

	else if ( charToConvert == 'i' || charToConvert == 'I' )
	{
		return "00110";
	}

	else if ( charToConvert == 'o' || charToConvert == 'O' )
	{
		return "11000";
	}

	else if ( charToConvert == 'p' || charToConvert == 'P' )
	{
		return "10110";
	}

	else if ( charToConvert == 'a' || charToConvert == 'A' )
	{
		return "00011";
	}

	else if ( charToConvert == 's' || charToConvert == 'S' )
	{
		return "00101";
	}

	else if ( charToConvert == 'd' || charToConvert == 'D' )
	{
		return "01001";
	}

	else if ( charToConvert == 'f' || charToConvert == 'F' )
	{
		return "01101";
	}

	else if ( charToConvert == 'g' || charToConvert == 'G' )
	{
		return "11010";
	}

	else if ( charToConvert == 'h' || charToConvert == 'H' )
	{
		return "10100";
	}

	else if ( charToConvert == 'j' || charToConvert == 'J' )
	{
		return "01011";
	}

	else if ( charToConvert == 'k' || charToConvert == 'K' )
	{
		return "01111";
	}

	else if ( charToConvert == 'l' || charToConvert == 'L' )
	{
		return "10010";
	}

	else if ( charToConvert == 'z' || charToConvert == 'Z' )
	{
		return "10001";
	}

	else if ( charToConvert == 'x' || charToConvert == 'X' )
	{
		return "11101";
	}

	else if ( charToConvert == 'c' || charToConvert == 'C' )
	{
		return "01110";
	}

	else if ( charToConvert == 'v' || charToConvert == 'V' )
	{
		return "11110";
	}

	else if ( charToConvert == 'b' || charToConvert == 'B' )
	{
		return "11001";
	}

	else if ( charToConvert == 'n' || charToConvert == 'N')
	{
		return "01100";
	}

	else if ( charToConvert == 'm' || charToConvert == 'M' )
	{
		return "11100";
	}

	else if ( charToConvert == ',' )
	{
		return "01000";
	}

	else if ( charToConvert == '-' )
	{
		return "00010";
	}

	else if ( charToConvert == '!' )
	{
		return "11011";
	}

	else if ( charToConvert == '.' )
	{
		return "11111";
	}

	else {								
	// Return the shell baudot value in string.
	return newbaudot;
	}
}

// Converts five baudot bits into an ASCII char.
char Baudot::convertToAscii( int value1, int value2, int value3, int value4, int value5 )
{
	       // This code works out if the current value of the chi wheels in horizontal order
		   // convert successfully to ITA2 code. Soon they will be used to actually
		   // compare code and encrypt.

		   bool hasitworked = false;

	       for ( int i = 0; i < 5; i++ ) // For every value in baudot:
		   {
			for ( int j = 0; j < 160; j++ ) // For every possible variation.
			{
				if ( value1 == getBaudotData(j) ) // If value 1 matches up with a baudot value on record.
				{
					if ( value2 == getBaudotData(j+1) ) // If value 2 matches up with a baudot value on record (etc)
					{
						if ( value3 == getBaudotData(j+2) )
						{
							if ( value4 == getBaudotData(j+3) )
							{
								if ( value5 == getBaudotData(j+4) )
								{
									if ( hasitworked == false ) // If match has already been found and noted:
									{

									// If the chi wheel is the value of the baudot code for "*"
									if ( value1 == 0 && value2 == 0 && value3 == 0 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = '*';
									}

									// If the chi wheel is the value of the baudot code for " "
									else if ( value1 == 0 && value2 == 0 && value3 == 1 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = ' ';
									}

									// If the chi wheel is the value of the baudot code for "q"
									else if ( value1 == 1 && value2 == 0 && value3 == 1 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = 'q';
									}

									// If the chi wheel is the value of the baudot code for "w"
									else if ( value1 == 1 && value2 == 0 && value3 == 0 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = 'w';
									}

									// If the chi wheel is the value of the baudot code for "e"
									else if ( value1 == 0 && value2 == 0 && value3 == 0 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 'e';
									}

									// If the chi wheel is the value of the baudot code for "r"
									else if ( value1 == 0 && value2 == 1 && value3 == 0 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = 'r';
									}

									// If the chi wheel is the value of the baudot code for "t"
									else if ( value1 == 1 && value2 == 0 && value3 == 0 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = 't';
									}

									// If the chi wheel is the value of the baudot code for "y"
									else if ( value1 == 1 && value2 == 0 && value3 == 1 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 'y';
									}

									// If the chi wheel is the value of the baudot code for "u"
									else if ( value1 == 0 && value2 == 0 && value3 == 1 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = 'u';
									}

									// If the chi wheel is the value of the baudot code for "i"
									else if ( value1 == 0 && value2 == 0 && value3 == 1 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = 'i';
									}

									// If the chi wheel is the value of the baudot code for "o"
									else if ( value1 == 1 && value2 == 1 && value3 == 0 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = 'o';
									}

									// If the chi wheel is the value of the baudot code for "p"
									else if ( value1 == 1 && value2 == 0 && value3 == 1 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = 'p';
									}

									// If the chi wheel is the value of the baudot code for "a"
									else if ( value1 == 0 && value2 == 0 && value3 == 0 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = 'a';
									}

									// If the chi wheel is the value of the baudot code for "s"
									else if ( value1 == 0 && value2 == 0 && value3 == 1 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 's';
									}

									// If the chi wheel is the value of the baudot code for "d"
									else if ( value1 == 0 && value2 == 1 && value3 == 0 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 'd';
									}

									// If the chi wheel is the value of the baudot code for "f"
									else if ( value1 == 0 && value2 == 1 && value3 == 1 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 'f';
									}

									// If the chi wheel is the value of the baudot code for "g"
									else if ( value1 == 1 && value2 == 1 && value3 == 0 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = 'g';
									}

									// If the chi wheel is the value of the baudot code for "h" (Pin 33 on chi)
									else if ( value1 == 1 && value2 == 0 && value3 == 1 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = 'h';
									}

									// If the chi wheel is the value of the baudot code for "j"
									else if ( value1 == 0 && value2 == 1 && value3 == 0 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = 'j';
									}

									// If the chi wheel is the value of the baudot code for "k"
									else if ( value1 == 0 && value2 == 1 && value3 == 1 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = 'k';
									}

									// If the chi wheel is the value of the baudot code for "l"
									else if ( value1 == 1 && value2 == 0 && value3 == 0 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = 'l';
									}

									// If the chi wheel is the value of the baudot code for "z"
									else if ( value1 == 1 && value2 == 0 && value3 == 0 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 'z';
									}

									// If the chi wheel is the value of the baudot code for "x"
									else if ( value1 == 1 && value2 == 1 && value3 == 1 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 'x';
									}

									// If the chi wheel is the value of the baudot code for "c"
									else if ( value1 == 0 && value2 == 1 && value3 == 1 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = 'c';
									}

									// If the chi wheel is the value of the baudot code for "v"
									else if ( value1 == 1 && value2 == 1 && value3 == 1 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = 'v';
									}

									// If the chi wheel is the value of the baudot code for "b"
									else if ( value1 == 1 && value2 == 1 && value3 == 0 && value4 == 0 && value5 == 1 )
									{
										currentChiChar = 'b';
									}

									// If the chi wheel is the value of the baudot code for "n"
									else if ( value1 == 0 && value2 == 1 && value3 == 1 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = 'n';
									}

									// If the chi wheel is the value of the baudot code for "m"
									else if ( value1 == 1 && value2 == 1 && value3 == 1 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = 'm';
									}

									// If the chi wheel is the value of the baudot code for ","
									else if ( value1 == 0 && value2 == 1 && value3 == 0 && value4 == 0 && value5 == 0 )
									{
										currentChiChar = ',';
									}

									// If the chi wheel is the value of the baudot code for "-"
									else if ( value1 == 0 && value2 == 0 && value3 == 0 && value4 == 1 && value5 == 0 )
									{
										currentChiChar = '-';
									}

									// If the chi wheel is the value of the baudot code for "!"
									else if ( value1 == 1 && value2 == 1 && value3 == 0 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = '!';
									}

									// If the chi wheel is the value of the baudot code for "."
									else if ( value1 == 1 && value2 == 1 && value3 == 1 && value4 == 1 && value5 == 1 )
									{
										currentChiChar = '.';

									} else { currentChiChar = 'n'; }
									
									// Tell the loop that the match has already been found.
									hasitworked = true;
									}
								}
							}
						}
					}
				}
			 }
			}

		   return currentChiChar; // Return the correct value.
}