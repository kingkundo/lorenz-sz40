#ifndef LORENZMANAGER_H
#define LORENZMANAGER_H

#include "LorenzWheel.h"
#include "LorenzWheelCollection.h"
#include "Baudot.h"
#include "LorenzMachine.h"
#include "Pindata.h"
#include "Screen.h"

class LorenzManager
{

public:

	LorenzManager();
	~LorenzManager();

	void ConsoleMenu();
	void ConsoleEncrypt();
	void ConsoleDecrypt();

	void SeedRandomNumbers();
	std::string Encrypt(std::string newMessage, bool draw);
	std::string Decrypt(std::string newMessage, bool draw);
	void WriteDiaryEntry();
	void ReadDiaryEntry();
	void GeneratePIN();
	void ViewPIN();
	void SetPIN();
	void SaveConfig();
	void LoadConfig();

	int ArgumentManager(int,char*[]);
	void PrintTitle();
	void Pause();
	bool ShouldIQuit();

	LorenzMachine GetLorenzMachine();
	LorenzWheelCollection GetWheels();
	Baudot GetBaudot();

private:

	double version;
	Screen window;

	bool first;
	int choice;
    bool exit;
    bool draw;

    LorenzMachine lorenzmachine;              // Actual simulation class.
	LorenzWheelCollection wheelcollection;    // Holds the groups of wheels.
    Baudot convert;                           // Converts between ASCII and Baudot-Murray ITA2 code.
    Pindata pindata;                          // Allows access to private and public pins (keys).

};

#endif