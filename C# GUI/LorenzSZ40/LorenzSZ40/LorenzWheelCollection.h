#ifndef LORENZWHEELCOLLECTION_H
#define LORENZWHEELCOLLECTION_H

#include "stdafx.h"
#include "LorenzWheel.h"

class LorenzWheelCollection
{
private:

public:

	std::string allPinData;

	int* chilinevalue;
	int* psilinevalue;

	// Creates all the wheels.
	LorenzWheel Ψ1;
	LorenzWheel Ψ2;
	LorenzWheel Ψ3;
	LorenzWheel Ψ4;
	LorenzWheel Ψ5;
	LorenzWheel Μ37;
	LorenzWheel Μ61;
	LorenzWheel Χ1;
	LorenzWheel Χ2;
	LorenzWheel Χ3;
	LorenzWheel Χ4;
	LorenzWheel Χ5;

	LorenzWheelCollection();
	~LorenzWheelCollection();

	// Usage: Put inside if statement. If the function returns 1, exit the program.
	int importPinData( std::string );
	
	void setUpWheels();

	void draw();

	void update(bool);

	void setChiWheelsLineValue();

	void setPsiWheelsLineValue();

	std::string getChiWheelsLineValue();

	std::string getPsiWheelsLineValue();

	void setAllPinData(std::string);

	std::string getAllPinData();

};

#endif