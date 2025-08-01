/*

      Tom Taylor - 2013

	  LorenzWheelCollection Class.
	  Creates a LorenzWheelCollection object that is used to hold
	  groups of wheels such as Ψ and Χ wheels.

	                                                               */

#include <iostream>
#include <string>
#include <fstream>
#include <numeric>

#include "LorenzWheel.h"
#include "LorenzWheelCollection.h"
#include "LorenzMachine.h"
#include "Baudot.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

// Default Constructor.
LorenzWheelCollection::LorenzWheelCollection() 
{ 
	chilinevalue = NULL; 
	psilinevalue = NULL; 
	allPinData = "001101010111110010001000111011100101010011100110100010011101011111101011111011001011110111000101111100110101000110110111111000110011001101011010101000111111111100001010001101010001001001010011110100110010101010110111101111101111111010110010001100000010001111100111100001000110000001100000111010011011110110000001111011001110011111100010111110101101010010110011110100010000100001110110111110000000011000001101011101011001011111011110110000001010100011000110010011100110000101001101010111110011101111000"; 
}

// Destructor.
LorenzWheelCollection::~LorenzWheelCollection() { delete[] chilinevalue; delete[] psilinevalue; }

// Set up the wheels with the right variables.
// Sets the wheel number appropriately.
// Sets the right pin settings to the right wheel.
// Can be used to reset the wheel.
void LorenzWheelCollection::setUpWheels()
{
	// Sets up all the wheels.
	// Can be used to restore all wheel settings back
	// to default.
	Ψ1.setWheelNumber(1);
	Ψ1.setWheelPosition(Ψ1.getDefaultWheelPosition());
	Ψ1.setPinSettings(allPinData);

	Ψ2.setWheelNumber(2);
	Ψ2.setWheelPosition(Ψ2.getDefaultWheelPosition());
	Ψ2.setPinSettings(allPinData);

	Ψ3.setWheelNumber(3);
	Ψ3.setWheelPosition(Ψ3.getDefaultWheelPosition());
	Ψ3.setPinSettings(allPinData);

	Ψ4.setWheelNumber(4);
	Ψ4.setWheelPosition(Ψ4.getDefaultWheelPosition());
	Ψ4.setPinSettings(allPinData);

	Ψ5.setWheelNumber(5);
	Ψ5.setWheelPosition(Ψ5.getDefaultWheelPosition());
	Ψ5.setPinSettings(allPinData);

	Μ37.setWheelNumber(6);
	Μ37.setWheelPosition(Μ37.getDefaultWheelPosition());
	Μ37.setPinSettings(allPinData);

	Μ61.setWheelNumber(7);
	Μ61.setWheelPosition(Μ61.getDefaultWheelPosition());
	Μ61.setPinSettings(allPinData);

	Χ1.setWheelNumber(8);
	Χ1.setWheelPosition(Χ1.getDefaultWheelPosition());
	Χ1.setPinSettings(allPinData);

	Χ2.setWheelNumber(9);
	Χ2.setWheelPosition(Χ2.getDefaultWheelPosition());
	Χ2.setPinSettings(allPinData);

	Χ3.setWheelNumber(10);
	Χ3.setWheelPosition(Χ3.getDefaultWheelPosition());
	Χ3.setPinSettings(allPinData);

	Χ4.setWheelNumber(11);
	Χ4.setWheelPosition(Χ4.getDefaultWheelPosition());
	Χ4.setPinSettings(allPinData);

	Χ5.setWheelNumber(12);
	Χ5.setWheelPosition(Χ5.getDefaultWheelPosition());
	Χ5.setPinSettings(allPinData);

}

// Draws the wheels with their values in the current
// position. This allows the simulation to be printed
// out to the user in realtime. I took inspiration for it
// from learning C# in XNA.
void LorenzWheelCollection::draw()
{

	// Spaces between first line and wheels printed.

	// Prints the values on the wheels.
	cout << "                     wheel:   ";
	cout << Ψ1.getWheelNumber() << " " << Ψ2.getWheelNumber() << " " << Ψ3.getWheelNumber() << " " << Ψ4.getWheelNumber() << " " << Ψ5.getWheelNumber() << "  " << Μ37.getWheelNumber() << " " << Μ61.getWheelNumber();
	cout << "  " << Χ1.getWheelNumber() << " " << Χ2.getWheelNumber() << " " << Χ3.getWheelNumber() << " " << Χ4.getWheelNumber() << " " << Χ5.getWheelNumber() << endl;
	cout << endl;

	// Prints out the previous wheel values.
	cout << "                     prev:    ";
	cout << Ψ1.getPreviousWheelValue() << " " << Ψ2.getPreviousWheelValue() << " " << Ψ3.getPreviousWheelValue() << " ";
	cout << Ψ4.getPreviousWheelValue() << " " << Ψ5.getPreviousWheelValue() << "  " << Μ37.getPreviousWheelValue() << " ";
	cout << Μ61.getPreviousWheelValue() << "  " << Χ1.getPreviousWheelValue() << " " << Χ2.getPreviousWheelValue() << " ";
	cout << Χ3.getPreviousWheelValue() << "  " << Χ4.getPreviousWheelValue() << "  " << Χ5.getPreviousWheelValue() << endl;

	// Prints out the current wheel values.
	cout << "                     current: ";
	cout << Ψ1.getCurrentWheelValue() << " " << Ψ2.getCurrentWheelValue() << " " << Ψ3.getCurrentWheelValue() << " ";
	cout << Ψ4.getCurrentWheelValue() << " " << Ψ5.getCurrentWheelValue() << "  " << Μ37.getCurrentWheelValue() << " ";
	cout << Μ61.getCurrentWheelValue() << "  " << Χ1.getCurrentWheelValue() << " " << Χ2.getCurrentWheelValue() << " ";
	cout << Χ3.getCurrentWheelValue() << "  " << Χ4.getCurrentWheelValue() << "  " << Χ5.getCurrentWheelValue() << endl;

	// Prints out the next wheel values.
	cout << "                     next:    ";
	cout << Ψ1.getNextWheelValue() << " " << Ψ2.getNextWheelValue() << " " << Ψ3.getNextWheelValue() << " ";
	cout << Ψ4.getNextWheelValue() << " " << Ψ5.getNextWheelValue() << "  " << Μ37.getNextWheelValue() << " ";
	cout << Μ61.getNextWheelValue() << "  " << Χ1.getNextWheelValue() << " " << Χ2.getNextWheelValue() << " ";
	cout << Χ3.getNextWheelValue() << "  " << Χ4.getNextWheelValue() << "  " << Χ5.getNextWheelValue() << endl << endl << endl;

}

// Uses logic to rotate the wheels.
void LorenzWheelCollection::update(bool rotate)
{
	// Updates the line values.
	setChiWheelsLineValue();
	setPsiWheelsLineValue();

	// If the function should cause a rotation.
	if ( rotate == true )
	{
		// These wheels always rotate for every character entered.
		Χ1.rotateWheel();
		Χ2.rotateWheel();
		Χ3.rotateWheel();
		Χ4.rotateWheel();
		Χ5.rotateWheel();

		// If the previous value on M61 is 1, then M37 will rotate.
		if ( Μ61.getPreviousWheelValue() == 1 )
		{
			Μ37.rotateWheel();
		}

		// This wheel always rotates for every character entered.
		Μ61.rotateWheel();

		// If the previous value of M37 is 1, then all X wheels rotate.
		if ( Μ37.getPreviousWheelValue() == 1)
		{
			Ψ1.rotateWheel();
			Ψ2.rotateWheel();
			Ψ3.rotateWheel();
			Ψ4.rotateWheel();
			Ψ5.rotateWheel();
		}
	}

}

// Imports the settings file with all the pin settings.
// It then saves the data in a string variable to be
// spread across each of the wheels when they are set up
// via the above function.
// THE STRING PARAMETER SHOULD BE THE NAME OF THE FILE
int LorenzWheelCollection::importPinData( string newPinData )
{

	// Loads the pin settings.
	ifstream newPinSettingsopen ( newPinData );

	// If the pin settings were loaded:
	if ( newPinSettingsopen.is_open())
	{	
		getline( newPinSettingsopen, allPinData ); // Place the pin settings in memory.

		newPinSettingsopen.close(); // Close down the file.
		return 0;
	}

	// If the pin settings weren't loaded, use default pin settings
	else 
	{
		allPinData = "110010000011111110101001001001101010111011011011101001111110010000000001010001101100000010010110001111100010101100011110001011101000100011111111111010000010010101010111001000010100101100001101011101101011011001000110111111010000000110110000010101100100010000111000100111100110001110111101010011001011010011011010011110111101111001001001010111110001101000100011101001011000110100001101011000000110110110100100110111101011101111000000101000111001100010110000100110001001000101011001001110111010001011110";
		return 0;
	}

}

// Sets the pin data to a value of ints in a string
void LorenzWheelCollection::setAllPinData( string newPinData )
{
	allPinData = newPinData;
}

// Returns all the loaded data from the newPinSettings.
// 501 0s and 1s.
string LorenzWheelCollection::getAllPinData()
{
	return allPinData; // Return the pin settings.
}

// Sets the values that line up on the chi wheels
// into a value to use later.
void LorenzWheelCollection::setChiWheelsLineValue()
{
	chilinevalue = new int [5]; // Chi line value in an array created to size 5.

	chilinevalue[0] = Ψ1.getCurrentWheelValue(); // Sets the first spot in the array to the appropriate wheel value.
	chilinevalue[1] = Ψ2.getCurrentWheelValue();
	chilinevalue[2] = Ψ3.getCurrentWheelValue();
	chilinevalue[3] = Ψ4.getCurrentWheelValue();
	chilinevalue[4] = Ψ5.getCurrentWheelValue();

}

// Sets the values that line up on the psi wheels
// into a value to use later.
void LorenzWheelCollection::setPsiWheelsLineValue()
{
	psilinevalue = new int [5]; // Psi line value in an array created to size 5.

	psilinevalue[0] = Χ1.getCurrentWheelValue(); // Sets the first spot in the array to the appropriate wheel value.
	psilinevalue[1] = Χ2.getCurrentWheelValue();
	psilinevalue[2] = Χ3.getCurrentWheelValue();
	psilinevalue[3] = Χ4.getCurrentWheelValue();
	psilinevalue[4] = Χ5.getCurrentWheelValue();

}