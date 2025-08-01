#ifndef LORENZWHEEL_H
#define LORENZWHEEL_H

class LorenzWheel
{
private:
	
	int wheelNumber;
	std::string newPinSettings;
	int currentPosition;
	int defaultWheelPosition;

public:

	int maxSize;

	int counter;

	int* values;

	LorenzWheel();
	
	LorenzWheel(int,int);

	~LorenzWheel();

	void rotateWheel();

	void setPinSettings(std::string);

	void setWheelNumber(int);

	void setWheelPosition(int);

	int getWheelNumber();

	int getWheelPosition();

	int getPreviousWheelValue();

	int getCurrentWheelValue();

	int getNextWheelValue();

	std::string getPinSettings();

	void setDefaultWheelPosition(int);

	int getDefaultWheelPosition();

	int getMaxSize();

};

#endif