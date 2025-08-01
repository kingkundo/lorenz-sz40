/*

      Tom Taylor - 2013

	  LorenzWheel Class.
	  Creates a LorenzWheel object that is used to hold and
	  set the pin settings for the LorenzWheel and Lorenz SZ40
	  encryption machine.

	                                                               */

#include <string>
#include <fstream>
#include <sstream>

#include "LorenzWheel.h"
#include "Baudot.h"
#include "LorenzMachine.h"
#include "LorenzWheelCollection.h"

using std::string;
using std::stringstream;

// Default Constructor.
LorenzWheel::LorenzWheel() { defaultWheelPosition = 1; maxSize = 0; counter = 0; values = NULL; wheelNumber = 0; newPinSettings = ""; currentPosition = 1; }

// Overloaded Constructor.
LorenzWheel::LorenzWheel( int newNumber, int newPosition ) { defaultWheelPosition = 1;
															 maxSize = 0;
															 counter = 0;
	                                                         values = NULL;
	                                                         wheelNumber = newNumber;
                                                             currentPosition = newPosition;
                                                             newPinSettings = ""; }

// Destructor.
LorenzWheel::~LorenzWheel() { delete[] values; }

// Sets the settings for the individual wheel.
void LorenzWheel::setPinSettings(string newPinData)
{

	// If this is the Ψ1 wheel
	if ( wheelNumber == 1 )
	{
		newPinSettings.resize ( 43 ); // Resize the string to hold this wheel's binary numbers.
		counter = 43; // Sets the counter that is used later. It is set to the same value as the resize.

		values = new int [43]; // Dynamic array is also the same size as the counter.

		for ( int i = 0; i < 43; i++ ) // For every number to transfer:
		{
			newPinSettings[i] = newPinData[i]; // Transfer the data.
			stringstream newstream;
			newstream << newPinData[i];
			newstream >> values[i]; // Converts it and stores it.
		}
	}

	if ( wheelNumber == 2 )
	{
		newPinSettings.resize ( 47 );
		counter = 47;

		values = new int [47];

		for ( int i = 0; i < 47; i++ )
		{
			newPinSettings[i] = newPinData[i + 43];
			stringstream newstream;
			newstream << newPinData[i + 43];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 3 )
	{
		newPinSettings.resize ( 51 );
		counter = 51;

		values = new int [ 51 ];

		for ( int i = 0; i < 51; i++ )
		{
			newPinSettings[i] = newPinData[i + 90];
			stringstream newstream;
			newstream << newPinData[i + 90];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 4 )
	{
		newPinSettings.resize ( 53 );
		counter = 53;

		values = new int [ 53 ];

		for ( int i = 0; i < 53; i++ )
		{
			newPinSettings[i] = newPinData[i + 141];
			stringstream newstream;
			newstream << newPinData[i + 141];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 5 )
	{
		newPinSettings.resize ( 59 );
		counter = 59;

		values = new int [ 59 ];

		for ( int i = 0; i < 59; i++ )
		{
			newPinSettings[i] = newPinData[i + 194];
			stringstream newstream;
			newstream << newPinData[i + 194];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 6 )
	{
		newPinSettings.resize ( 37 );
		counter = 37;

		values = new int [ 37 ];

		for ( int i = 0; i < 37; i++ )
		{
			newPinSettings[i] = newPinData[i + 253];
			stringstream newstream;
			newstream << newPinData[i + 253];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 7 )
	{
		newPinSettings.resize ( 61 );
		counter = 61;

		values = new int [ 61 ];

		for ( int i = 0; i < 61; i++ )
		{
			newPinSettings[i] = newPinData[i + 290];
			stringstream newstream;
			newstream << newPinData[i + 290];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 8 )
	{
		newPinSettings.resize ( 41 );
		counter = 41;

		values = new int [ 41 ];

		for ( int i = 0; i < 41; i++ )
		{
			newPinSettings[i] = newPinData[i + 351];
			stringstream newstream;
			newstream << newPinData[i + 351];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 9 )
	{
		newPinSettings.resize ( 31 );
		counter = 31;

		values = new int [ 31 ];

		for ( int i = 0; i < 31; i++ )
		{
			newPinSettings[i] = newPinData[i + 392];
			stringstream newstream;
			newstream << newPinData[i + 392];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 10 )
	{
		newPinSettings.resize ( 29 );
		counter = 29;

		values = new int [ 29 ];

		for ( int i = 0; i < 29; i++ )
		{
			newPinSettings[i] = newPinData[i + 423];
			stringstream newstream;
			newstream << newPinData[i + 423];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 11 )
	{
		newPinSettings.resize ( 26 );
		counter = 26;
		
		values = new int [ 26 ];

		for ( int i = 0; i < 26; i++ )
		{
			newPinSettings[i] = newPinData[i + 452];
			stringstream newstream;
			newstream << newPinData[i + 452];
			newstream >> values[i];
		}
	}

	if ( wheelNumber == 12 )
	{
		newPinSettings.resize ( 23 );
		counter = 23;

		values = new int [ 23 ];

		for ( int i = 0; i < 23; i++ )
		{
			newPinSettings[i] = newPinData[i + 478];
			stringstream newstream;
			newstream << newPinData[i + 478];
			newstream >> values[i];
		}
	}

	maxSize = counter;
}

// Sets the wheel number.
void LorenzWheel::setWheelNumber( int newNumber )
{
	wheelNumber = newNumber;
}

// Sets the wheel position.
void LorenzWheel::setWheelPosition ( int newPosition )
{
	currentPosition = newPosition;
}

// Returns the wheel number.
int LorenzWheel::getWheelNumber()
{
	return wheelNumber;
}

// Returns the wheel position.
int LorenzWheel::getWheelPosition()
{
	return currentPosition;
}

// Returns the previous wheel value.
int LorenzWheel::getPreviousWheelValue()
{
	if ( currentPosition == 1 )
	{
		return values[maxSize - 1];
	}
	else
	{
	return values[currentPosition - 2];
	}
}

// Returns the wheel value for the current position.
int LorenzWheel::getCurrentWheelValue()
{
	return values[currentPosition - 1];
}

// Returns the previous wheel value.
int LorenzWheel::getNextWheelValue()
{
	if ( currentPosition == ( maxSize ))
	{
		return values[0];
	}
	else
	{
	return values[currentPosition];
	}
}

// Returns the wheels pin settings.
string LorenzWheel::getPinSettings()
{
	return newPinSettings; // Return the pin settings.
}

// Rotates the wheel.
void LorenzWheel::rotateWheel()
{
	// If wheel 1.
	if ( wheelNumber == 1 )
	{ 
		if ( currentPosition < 43 ) // If the wheel isn't at the end:
		{
		currentPosition += 1; // Rotate the wheel once.
		}
		else // If the wheel is at the end:
		{
		currentPosition = 1; // Reset the position of the wheel to 1.
		}
	}

	if ( wheelNumber == 2 )
	{
		if ( currentPosition < 47 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

	if ( wheelNumber == 3 )
	{
		if ( currentPosition < 51 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}


	if ( wheelNumber == 4 )
	{
		if ( currentPosition < 53 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}


	if ( wheelNumber == 5 )
	{
		if ( currentPosition < 59 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}


	if ( wheelNumber == 6 )
	{
		if ( currentPosition < 37 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

	if ( wheelNumber == 7 )
	{
		if ( currentPosition < 61 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

	if ( wheelNumber == 8 )
	{
		if ( currentPosition < 41 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

	if ( wheelNumber == 9 )
	{
		if ( currentPosition < 31 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

	if ( wheelNumber == 10 )
	{
		if ( currentPosition < 29 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

	if ( wheelNumber == 11 )
	{
		if ( currentPosition < 26 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

	if ( wheelNumber == 12 )
	{
		if ( currentPosition < 23 )
		{
			currentPosition += 1;
		}
		else
		{
			currentPosition = 1;
		}
	}

}

// Sets the default position of the wheels.
void LorenzWheel::setDefaultWheelPosition(int newPos) { defaultWheelPosition = newPos; }

// Gets the current default position of the wheels.
int LorenzWheel::getDefaultWheelPosition() { return defaultWheelPosition; }

// Get the maximum size of a wheel.
int LorenzWheel::getMaxSize() { return maxSize; }