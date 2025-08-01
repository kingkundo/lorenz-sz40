/*

      Tom Taylor - 2013

	  LorenzMachine Class.
	  Uses the other Lorenz classes to actually encrypt
	  and decrypt messages.

	  Note: A good thing to update when I get the time is to
	  combine all the encryption and decryption functions into
	  two functions that will do all features based on passed
	  in boolean arguments, such as: diary = true, silent = false;

	                                                               */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ofstream;

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

#include "LorenzWheel.h"
#include "LorenzWheelCollection.h"
#include "Baudot.h"
#include "LorenzMachine.h"

// Default constructor.
LorenzMachine::LorenzMachine() { }

// Destructor.
LorenzMachine::~LorenzMachine() { }

// This function clears the screen.
// A copy of the one that is in the main,
// to be available locally to these two functions below.
void wipeScreen()
{
	system ( CLEAR );
}

// This function just prints out the title.
void printLorenzTitle()
{
	wipeScreen();
	cout << endl << endl << endl;
	cout << "             M""MMMMMMMM" << endl;
	cout << "             M  MMMMMMMM" << endl;
	cout << "             M  MMMMMMMM .d8888b. 88d888b. .d8888b. 88d888b. d888888b" << endl;
	cout << "             M  MMMMMMMM 88'  `88 88'  `88 88ooood8 88'  `88    .d8P'" << endl;
	cout << "             M  MMMMMMMM 88.  .88 88       88.  ... 88    88  .Y8P   " << endl;
	cout << "             M         M `88888P' dP       `88888P' dP    dP d888888P" << endl;
	cout << "              -----MP~~~~~~~MM M~~~~~~~~~M dP   dP  a8888a" << endl;
	cout << "                   M  mmmmm..M Mmmmmm   .M 88   88 d8' ..8b" << endl;
	cout << "                   M.      `YM MMMMP  .MMM 88aaa88 88 .P 88" << endl;
	cout << "                   MMMMMMM.  M MMP  .MMMMM      88 88 d' 88" << endl;
	cout << "                   M. .MMM'  M M' .MMMMMMM      88 Y8'' .8P" << endl;
	cout << "                   Mb.     .dM M         M      dP  Y8888P " << endl;
	cout << "                   MMMMMMMMMMM MMMMMMMMMMM" << endl << endl << "                               Tom Taylor 2014" << endl << endl;
}

// Encryption.
string LorenzMachine::encrypt( LorenzWheelCollection &wheelcollection, Baudot &convert, string newMessage, bool draw )
{
	wheelcollection.setUpWheels();

	wheelcollection.update(false); // Updates the wheels.

	int length = newMessage.size(); // Stores the size of the message in an integer.

	char* encryptedText = new char [length]; // Creates a dynamic array to the value of the size of the message.
											 // It's only temporary so I've created it within the function itself.

	// Inits string
	string currentCharInBaudot = "00000";

	// For safety, points everything within encryptedText to NULL.
	for ( int i = 0; i < length; i++ ) { encryptedText[i] = NULL; }

	int newMessageSize = newMessage.size();

	// For every character in the newcharacter string.
	for ( int i = 0; i < newMessageSize; i++  )
	{
		if ( draw ) {

			for ( int j = 0; j < i; j++) 
			{
				cout << encryptedText[j];
			}

			cout << endl << endl;
		}
		// Holds the five bits representing the wheels in an array in baudot.
		int wheelvals[5];

		// Holds the five bits representing the keycode in an array in baudot.
		int keyword[5];

		// Holds the five bits representing the encrypted character in an array in baudot.
		int encrypted[5];

		if ( draw ) {
			cout << "                         Current progress:  " << endl;
		}

		// Gives currentCharInBaudot the value of the current char in baudot.
		currentCharInBaudot = convert.convertToBaudot(newMessage[i]);

		// This loop sets the wheelvals array to the baudot 5 bits.
		for ( int j = 0; j < 5; j++ )
		{
			stringstream newvar;
			newvar << currentCharInBaudot[j];
			newvar >> wheelvals[j];
		}


		if ( draw ) {
		cout << "                         Un-encrypted char: " << newMessage[i] << endl;
		cout << "                         Value in baudot:   " << currentCharInBaudot << endl;
		cout << "                         Current key:       ";
		}

		// Prints out the current key:
		if ( ( wheelvals[0] ^ wheelcollection.Χ1.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[0] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[0] = 0; }

		if ( ( wheelvals[1] ^ wheelcollection.Χ2.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[1] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[1] = 0; }

		if ( ( wheelvals[2] ^ wheelcollection.Χ3.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[2] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[2] = 0;}

		if ( ( wheelvals[3] ^ wheelcollection.Χ4.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[3] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[3] = 0; }

		if ( ( wheelvals[4] ^ wheelcollection.Χ5.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[4] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[4] = 0; }

		if ( draw) {
		cout << endl;

		// Prints out the baudot value of the encrypted char:
		cout << "                         Value in baudot:   ";
		}

		if ( ( keyword[0] ^ wheelcollection.Ψ1.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			encrypted[0] = 1;

		} else { if ( draw ) { cout << "0"; } encrypted[0] = 0; }

		if ( ( keyword[1] ^ wheelcollection.Ψ2.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			encrypted[1] = 1;

		} else { if ( draw ) { cout << "0"; } encrypted[1] = 0; }

		if ( ( keyword[2] ^ wheelcollection.Ψ3.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			encrypted[2] = 1;

		} else { if ( draw ) { cout << "0"; } encrypted[2] = 0; }

		if ( ( keyword[3] ^ wheelcollection.Ψ4.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			encrypted[3] = 1;

		} else { if ( draw ) { cout << "0"; } encrypted[3] = 0; }

		if ( ( keyword[4] ^ wheelcollection.Ψ5.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			encrypted[4] = 1;

		} else { if ( draw ) { cout << "0"; } encrypted[4] = 0; }

		if ( draw ) {
		cout << endl;

		// Prints out the value of the encrypted char:
		cout << "                         Encrypted char:    " << convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] ) << endl;
		}

		encryptedText[i] = convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );


		// Holds the decrypted text in a file.
		//ofstream encrypteddata;
        //encrypteddata.open ("encrypted.txt");

		// Updates the wheels and rotates,
		// then redraws the display each rotation.
		// TO ROTATE, UPDATE TRUE, ELSE UPDATE FALSE.
		if ( draw ) {
			printLorenzTitle(); }

		wheelcollection.update(true);

		if ( draw ) {
		wheelcollection.draw();
		}
		//cout << "(Also saved to 'encrypted.txt')";

		/*for ( int i = 0; i < length; i++ )
		{
			encrypteddata << encryptedText[i];
		}

		encrypteddata.close();
		encrypteddata.clear();*/
		//cout << endl << endl;

	}

	string encryptedString(encryptedText,length);

	delete[] encryptedText; // Deletes the dynamic array from earlier.

	return encryptedString;
}

// Decryption.
string LorenzMachine::decrypt( LorenzWheelCollection &wheelcollection, Baudot &convert, string newMessage, bool draw )
{
	wheelcollection.setUpWheels();

	wheelcollection.update(false); // Updates the wheels.

	int length = newMessage.size(); // Stores the size of the message in an integer.

	char* decryptedText = new char [length]; // Creates a dynamic array to the value of the size of the message.
											 // It's only temporary so I've created it within the function itself.

	// Inits string
	string currentCharInBaudot = "00000";

	// For safety, points everything within decryptedText to NULL.
	for ( int i = 0; i < length; i++ ) { decryptedText[i] = NULL; }

	int newMessageSize = newMessage.size();

	// For every character in the newcharacter string.
	for ( int i = 0; i < newMessageSize; i++  )
	{
		if ( draw ) {

			for ( int j = 0; j < i; j++) 
			{
				cout << decryptedText[j];
			}

			cout << endl << endl;
		}
		// Holds the five bits representing the wheels in an array in baudot.
		int wheelvals[5];

		// Holds the five bits representing the keycode in an array in baudot.
		int keyword[5];

		// Holds the five bits representing the decrypted character in an array in baudot.
		int decrypted[5];

		if ( draw ) {
			cout << "                         Current progress:  " << endl;
		}

		// Gives currentCharInBaudot the value of the current char in baudot.
		currentCharInBaudot = convert.convertToBaudot(newMessage[i]);

		// This loop sets the wheelvals array to the baudot 5 bits.
		for ( int j = 0; j < 5; j++ )
		{
			stringstream newvar;
			newvar << currentCharInBaudot[j];
			newvar >> wheelvals[j];
		}


		if ( draw ) {
		cout << "                         Decrypted char: " << newMessage[i] << endl;
		cout << "                         Value in baudot:   " << currentCharInBaudot << endl;
		cout << "                         Current key:       ";
		}

		// Prints out the current key:
		if ( ( wheelvals[0] ^ wheelcollection.Χ1.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[0] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[0] = 0; }

		if ( ( wheelvals[1] ^ wheelcollection.Χ2.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[1] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[1] = 0; }

		if ( ( wheelvals[2] ^ wheelcollection.Χ3.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[2] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[2] = 0;}

		if ( ( wheelvals[3] ^ wheelcollection.Χ4.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[3] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[3] = 0; }

		if ( ( wheelvals[4] ^ wheelcollection.Χ5.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			keyword[4] = 1;

		} else { if ( draw ) { cout << "0"; } keyword[4] = 0; }

		if ( draw) {
		cout << endl;

		// Prints out the baudot value of the decrypted char:
		cout << "                         Value in baudot:   ";
		}

		if ( ( keyword[0] ^ wheelcollection.Ψ1.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			decrypted[0] = 1;

		} else { if ( draw ) { cout << "0"; } decrypted[0] = 0; }

		if ( ( keyword[1] ^ wheelcollection.Ψ2.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			decrypted[1] = 1;

		} else { if ( draw ) { cout << "0"; } decrypted[1] = 0; }

		if ( ( keyword[2] ^ wheelcollection.Ψ3.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			decrypted[2] = 1;

		} else { if ( draw ) { cout << "0"; } decrypted[2] = 0; }

		if ( ( keyword[3] ^ wheelcollection.Ψ4.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			decrypted[3] = 1;

		} else { if ( draw ) { cout << "0"; } decrypted[3] = 0; }

		if ( ( keyword[4] ^ wheelcollection.Ψ5.getCurrentWheelValue() ) )
		{
			if ( draw ) {
			cout << "1";
			}

			decrypted[4] = 1;

		} else { if ( draw ) { cout << "0"; } decrypted[4] = 0; }

		if ( draw ) {
		cout << endl;

		// Prints out the value of the decrypted char:
		cout << "                         decrypted char:    " << convert.convertToAscii(decrypted[0], decrypted[1], decrypted[2],
			decrypted[3], decrypted[4] ) << endl;
		}

		decryptedText[i] = convert.convertToAscii(decrypted[0], decrypted[1], decrypted[2],
			decrypted[3], decrypted[4] );


		// Holds the decrypted text in a file.
		//ofstream decrypteddata;
        //decrypteddata.open ("decrypted.txt");

		// Updates the wheels and rotates,
		// then redraws the display each rotation.
		// TO ROTATE, UPDATE TRUE, ELSE UPDATE FALSE.
		if ( draw ) {
			printLorenzTitle(); }

		wheelcollection.update(true);

		if ( draw ) {
		wheelcollection.draw();
		}
		//cout << "(Also saved to 'decrypted.txt')";

		/*for ( int i = 0; i < length; i++ )
		{
			decrypteddata << decryptedText[i];
		}

		decrypteddata.close();
		decrypteddata.clear();*/
		//cout << endl << endl;

	}

	string decryptedString(decryptedText,length);

	delete[] decryptedText; // Deletes the dynamic array from earlier.

	return decryptedString;
}

// Diary encryption.
char* LorenzMachine::encryptDiary( string newMessage, LorenzWheelCollection &wheelcollection, Baudot &convert )
{

	wheelcollection.update(false); // Updates the wheels.
	//wheelcollection.draw();        // Draws the wheels.

	int length = newMessage.size(); // Stores the size of the message in an integer.

	char* encryptedText = new char [length]; // Creates a dynamic array to the value of the size of the message.
											 // It's only temporary so I've created it within the function itself.

	// Inits string
	string currentCharInBaudot = "00000";

	// For safety, points everything within encryptedText to NULL.
	for ( int i = 0; i < length; i++ ) { encryptedText[i] = NULL; }

	int newMessageSize = newMessage.size();

	// For every character in the newcharacter string.
	for ( int i = 0; i < newMessageSize; i++  )
	{

		// Holds the five bits representing the wheels in an array in baudot.
		int wheelvals[5];

		// Holds the five bits representing the keycode in an array in baudot.
		int keyword[5];

		// Holds the five bits representing the encrypted character in an array in baudot.
		int encrypted[5];

		//cout << "                         Current progress:  " << endl;

		// Gives currentCharInBaudot the value of the current char in baudot.
		currentCharInBaudot = convert.convertToBaudot(newMessage[i]);

		// This loop sets the wheelvals array to the baudot 5 bits.
		for ( int j = 0; j < 5; j++ )
		{
			stringstream newvar;
			newvar << currentCharInBaudot[j];
			newvar >> wheelvals[j];
		}

		//cout << "                         Un-encrypted char: " << newMessage[i] << endl;
		//cout << "                         Value in baudot:   " << currentCharInBaudot << endl;
		//cout << "                         Current key:       ";

		// Prints out the current key:
		if ( ( wheelvals[0] ^ wheelcollection.Χ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[0] = 1;

		} else { //cout << "0";
			keyword[0] = 0; }

		if ( ( wheelvals[1] ^ wheelcollection.Χ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[1] = 1;

		} else { //cout << "0";
			keyword[1] = 0; }

		if ( ( wheelvals[2] ^ wheelcollection.Χ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[2] = 1;

		} else { //cout << "0";
			keyword[2] = 0;}

		if ( ( wheelvals[3] ^ wheelcollection.Χ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[3] = 1;

		} else { //cout << "0"; 
			keyword[3] = 0; }

		if ( ( wheelvals[4] ^ wheelcollection.Χ5.getCurrentWheelValue() ) )
		{
			//cout << "1";	
			keyword[4] = 1;

		} else { //cout << "0";
			keyword[4] = 0; }

		//cout << endl;

		// Prints out the baudot value of the encrypted char:
		//cout << "                         Value in baudot:   ";

		if ( ( keyword[0] ^ wheelcollection.Ψ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[0] = 1;

		} else { //cout << "0";
			encrypted[0] = 0; }

		if ( ( keyword[1] ^ wheelcollection.Ψ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[1] = 1;

		} else { //cout << "0";
			encrypted[1] = 0; }

		if ( ( keyword[2] ^ wheelcollection.Ψ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[2] = 1;

		} else { //cout << "0";
			encrypted[2] = 0; }

		if ( ( keyword[3] ^ wheelcollection.Ψ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[3] = 1;

		} else { //cout << "0";
			encrypted[3] = 0; }

		if ( ( keyword[4] ^ wheelcollection.Ψ5.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[4] = 1;

		} else { //cout << "0";
			encrypted[4] = 0; }

		//cout << endl;

		// Prints out the value of the encrypted char:
		//cout << "                         Encrypted char:    "
		convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );


		encryptedText[i] = convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );


		// Updates the wheels and rotates,
		// then redraws the display each rotation.
		// TO ROTATE, UPDATE TRUE, ELSE UPDATE FALSE.
		printLorenzTitle();
		wheelcollection.update(true);
		wheelcollection.draw();
        //cout << endl << endl;;

		for (int i = 0; i < length; i++ )
		{
		cout << encryptedText[i];
		}

		//cout << endl << endl;

	}

	//cout << endl;

	return encryptedText;
}

// Silent diary encryption.
char* LorenzMachine::encryptDiarySilent( string newMessage, LorenzWheelCollection &wheelcollection, Baudot &convert )
{

	wheelcollection.update(false); // Updates the wheels.
	//wheelcollection.draw();        // Draws the wheels.

	int length = newMessage.size(); // Stores the size of the message in an integer.

	char* encryptedText = new char [length]; // Creates a dynamic array to the value of the size of the message.
											 // It's only temporary so I've created it within the function itself.

	// Inits string
	string currentCharInBaudot = "00000";

	// For safety, points everything within encryptedText to NULL.
	for ( int i = 0; i < length; i++ ) { encryptedText[i] = NULL; }

	int newMessageSize = newMessage.size();

	// For every character in the newcharacter string.
	for ( int i = 0; i < newMessageSize; i++  )
	{

		// Holds the five bits representing the wheels in an array in baudot.
		int wheelvals[5];

		// Holds the five bits representing the keycode in an array in baudot.
		int keyword[5];

		// Holds the five bits representing the encrypted character in an array in baudot.
		int encrypted[5];

		//cout << "                         Current progress:  " << endl;

		// Gives currentCharInBaudot the value of the current char in baudot.
		currentCharInBaudot = convert.convertToBaudot(newMessage[i]);

		// This loop sets the wheelvals array to the baudot 5 bits.
		for ( int j = 0; j < 5; j++ )
		{
			stringstream newvar;
			newvar << currentCharInBaudot[j];
			newvar >> wheelvals[j];
		}

		//cout << "                         Un-encrypted char: " << newMessage[i] << endl;
		//cout << "                         Value in baudot:   " << currentCharInBaudot << endl;
		//cout << "                         Current key:       ";

		// Prints out the current key:
		if ( ( wheelvals[0] ^ wheelcollection.Χ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[0] = 1;

		} else { //cout << "0";
			keyword[0] = 0; }

		if ( ( wheelvals[1] ^ wheelcollection.Χ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[1] = 1;

		} else { //cout << "0";
			keyword[1] = 0; }

		if ( ( wheelvals[2] ^ wheelcollection.Χ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[2] = 1;

		} else { //cout << "0";
			keyword[2] = 0;}

		if ( ( wheelvals[3] ^ wheelcollection.Χ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[3] = 1;

		} else { //cout << "0"; 
			keyword[3] = 0; }

		if ( ( wheelvals[4] ^ wheelcollection.Χ5.getCurrentWheelValue() ) )
		{
			//cout << "1";	
			keyword[4] = 1;

		} else { //cout << "0";
			keyword[4] = 0; }

		//cout << endl;

		// Prints out the baudot value of the encrypted char:
		//cout << "                         Value in baudot:   ";

		if ( ( keyword[0] ^ wheelcollection.Ψ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[0] = 1;

		} else { //cout << "0";
			encrypted[0] = 0; }

		if ( ( keyword[1] ^ wheelcollection.Ψ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[1] = 1;

		} else { //cout << "0";
			encrypted[1] = 0; }

		if ( ( keyword[2] ^ wheelcollection.Ψ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[2] = 1;

		} else { //cout << "0";
			encrypted[2] = 0; }

		if ( ( keyword[3] ^ wheelcollection.Ψ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[3] = 1;

		} else { //cout << "0";
			encrypted[3] = 0; }

		if ( ( keyword[4] ^ wheelcollection.Ψ5.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[4] = 1;

		} else { //cout << "0";
			encrypted[4] = 0; }

		//cout << endl;

		// Prints out the value of the encrypted char:
		//cout << "                         Encrypted char:    "
		convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );


		encryptedText[i] = convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );


		// Updates the wheels and rotates,
		// then redraws the display each rotation.
		// TO ROTATE, UPDATE TRUE, ELSE UPDATE FALSE.
		//printLorenzTitle();
		wheelcollection.update(true);
		//wheelcollection.draw();
		//cout << endl << endl;

	}

	//cout << endl;

	return encryptedText;
}

// Diary decryption.
char* LorenzMachine::decryptDiary( string newMessage, LorenzWheelCollection &wheelcollection, Baudot &convert )
{

	// Note: This does much the same as the encryption function but in reverse.

	wheelcollection.update(false); // Updates the wheels.
	//wheelcollection.draw();        // Draws the wheels.

	int length = newMessage.size();

	char* unencryptedText = new char [length];

	// String that will hold temporary values.
	string currentCharInBaudot = "00000";

	// Sets my unencryptedText up. 
	for ( int i = 0; i < length; i++ )
	{
		unencryptedText[i] = NULL;
	}

	// Cast the size to an integer value for use in loop.
	int newMessageSize = newMessage.size();

	// For every character in the newcharacter string.
	for ( int i = 0; i < newMessageSize; i++  )
	{
		int wheelvals[5];
		int keyword[5];
		int encrypted[5];

		//cout << "                         Current progress:  " << endl;

		// Gives currentCharInBaudot the value of the current char in baudot.
		currentCharInBaudot = convert.convertToBaudot(newMessage[i]);

		// This loop sets the wheelvals array to the baudot 5 bits.
		for ( int j = 0; j < 5; j++ )
		{
			stringstream newvar;
			newvar << currentCharInBaudot[j];
			newvar >> wheelvals[j];
		}

		// Prints out the value of the current char.
		//cout << "                         Encrypted char: " << newMessage[i] << endl;

		// Prints the baudot value of the current char.
		//cout << "                         Value in baudot:   " << currentCharInBaudot << endl;

		// Prints out the value of the current key.
		//cout << "                         Current key:       ";

		if ( ( wheelvals[0] ^ wheelcollection.Ψ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[0] = 1;

		} else { //cout << "0";
			keyword[0] = 0; }

		if ( ( wheelvals[1] ^ wheelcollection.Ψ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[1] = 1;

		} else { //cout << "0";
			keyword[1] = 0; }

		if ( ( wheelvals[2] ^ wheelcollection.Ψ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[2] = 1;

		} else { //cout << "0";
			keyword[2] = 0;}

		if ( ( wheelvals[3] ^ wheelcollection.Ψ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[3] = 1;

		} else { //cout << "0";
			keyword[3] = 0; }

		if ( ( wheelvals[4] ^ wheelcollection.Ψ5.getCurrentWheelValue() ) )
		{
			//cout << "1";	
			keyword[4] = 1;

		} else { //cout << "0";
			keyword[4] = 0; }

		//cout << endl;

		// Prints out the baudot value of the decrypted char.
		//cout << "                         Value in baudot:   ";

		if ( ( keyword[0] ^ wheelcollection.Χ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[0] = 1;

		} else { //cout << "0";
			encrypted[0] = 0; }

		if ( ( keyword[1] ^ wheelcollection.Χ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[1] = 1;

		} else { //cout << "0";
			encrypted[1] = 0; }

		if ( ( keyword[2] ^ wheelcollection.Χ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[2] = 1;

		} else { //cout << "0";
			encrypted[2] = 0; }

		if ( ( keyword[3] ^ wheelcollection.Χ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[3] = 1;

		} else { //cout << "0";
			encrypted[3] = 0; }

		if ( ( keyword[4] ^ wheelcollection.Χ5.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[4] = 1;

		} else { //cout << "0";
			encrypted[4] = 0; }

		//cout << endl;

		// Prints out the value of the decrypted char.
		//cout << "                         Decrypted char:    "
		convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );


		unencryptedText[i] = convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );

		// Updates the wheels and rotates.
		// then redraws the display each rotation.
		// TO ROTATE, UPDATE TRUE, ELSE UPDATE FALSE.
		//printLorenzTitle();
		wheelcollection.update(true);
		printLorenzTitle();
		wheelcollection.draw();
        //cout << endl << endl;;

		for (int i = 0; i < length; i++ )
		{
		cout << unencryptedText[i];
		}
	}

	//cout << endl;
	return unencryptedText;
}

// Silent diary decryption.
char* LorenzMachine::decryptDiarySilent( string newMessage, LorenzWheelCollection &wheelcollection, Baudot &convert )
{

	// Note: This does much the same as the encryption function but in reverse.

	wheelcollection.update(false); // Updates the wheels.
	//wheelcollection.draw();        // Draws the wheels.

	int length = newMessage.size();

	char* unencryptedText = new char [length];

	// String that will hold temporary values.
	string currentCharInBaudot = "00000";

	// Sets my unencryptedText up. 
	for ( int i = 0; i < length; i++ )
	{
		unencryptedText[i] = NULL;
	}

	// Cast the size to an integer value for use in loop.
	int newMessageSize = newMessage.size();

	// For every character in the newcharacter string.
	for ( int i = 0; i < newMessageSize; i++  )
	{
		int wheelvals[5];
		int keyword[5];
		int encrypted[5];

		//cout << "                         Current progress:  " << endl;

		// Gives currentCharInBaudot the value of the current char in baudot.
		currentCharInBaudot = convert.convertToBaudot(newMessage[i]);

		// This loop sets the wheelvals array to the baudot 5 bits.
		for ( int j = 0; j < 5; j++ )
		{
			stringstream newvar;
			newvar << currentCharInBaudot[j];
			newvar >> wheelvals[j];
		}

		// Prints out the value of the current char.
		//cout << "                         Encrypted char: " << newMessage[i] << endl;

		// Prints the baudot value of the current char.
		//cout << "                         Value in baudot:   " << currentCharInBaudot << endl;

		// Prints out the value of the current key.
		//cout << "                         Current key:       ";

		if ( ( wheelvals[0] ^ wheelcollection.Ψ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[0] = 1;

		} else { //cout << "0";
			keyword[0] = 0; }

		if ( ( wheelvals[1] ^ wheelcollection.Ψ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[1] = 1;

		} else { //cout << "0";
			keyword[1] = 0; }

		if ( ( wheelvals[2] ^ wheelcollection.Ψ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[2] = 1;

		} else { //cout << "0";
			keyword[2] = 0;}

		if ( ( wheelvals[3] ^ wheelcollection.Ψ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			keyword[3] = 1;

		} else { //cout << "0";
			keyword[3] = 0; }

		if ( ( wheelvals[4] ^ wheelcollection.Ψ5.getCurrentWheelValue() ) )
		{
			//cout << "1";	
			keyword[4] = 1;

		} else { //cout << "0";
			keyword[4] = 0; }

		//cout << endl;

		// Prints out the baudot value of the decrypted char.
		//cout << "                         Value in baudot:   ";

		if ( ( keyword[0] ^ wheelcollection.Χ1.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[0] = 1;

		} else { //cout << "0";
			encrypted[0] = 0; }

		if ( ( keyword[1] ^ wheelcollection.Χ2.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[1] = 1;

		} else { //cout << "0";
			encrypted[1] = 0; }

		if ( ( keyword[2] ^ wheelcollection.Χ3.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[2] = 1;

		} else { //cout << "0";
			encrypted[2] = 0; }

		if ( ( keyword[3] ^ wheelcollection.Χ4.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[3] = 1;

		} else { //cout << "0";
			encrypted[3] = 0; }

		if ( ( keyword[4] ^ wheelcollection.Χ5.getCurrentWheelValue() ) )
		{
			//cout << "1";
			encrypted[4] = 1;

		} else { //cout << "0";
			encrypted[4] = 0; }

		//cout << endl;

		// Prints out the value of the decrypted char.
		//cout << "                         Decrypted char:    "
		convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );


		unencryptedText[i] = convert.convertToAscii(encrypted[0], encrypted[1], encrypted[2],
			encrypted[3], encrypted[4] );

		// Updates the wheels and rotates.
		// then redraws the display each rotation.
		// TO ROTATE, UPDATE TRUE, ELSE UPDATE FALSE.
		//printLorenzTitle();
		wheelcollection.update(true);
		//wheelcollection.draw();
        //cout << endl << endl;;
	}

	//cout << endl;
	return unencryptedText;
}
