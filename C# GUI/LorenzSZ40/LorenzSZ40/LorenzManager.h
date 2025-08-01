#ifndef LORENZMANAGER_H
#define LORENZMANAGER_H

#include "LorenzWheel.h"
#include "LorenzWheelCollection.h"
#include "Baudot.h"
#include "LorenzMachine.h"
#include "Pindata.h"

class LorenzManager
{

public:

	LorenzManager();
	~LorenzManager();

	void ConsoleMenu();
	void ConsoleEncrypt();
	void ConsoleDecrypt();

	void SeedRandomNumbers();
	void RandomisePIN();
	std::string Encrypt(std::string newMessage, bool draw);
	std::string Decrypt(std::string newMessage, bool draw);
	void WriteDiaryEntry();
	void ReadDiaryEntry();
	void GeneratePIN();
	void ViewPIN();
	void SetPIN();
	void SaveConfig(std::string);
	void SaveConfigConsole();
	void LoadConfig(std::string);
	void LoadConfigConsole();

	int ArgumentManager(int,char*[]);
	void PrintTitle();
	void Pause();
	bool ShouldIQuit();

	LorenzMachine GetLorenzMachine();
	LorenzWheelCollection GetWheels();
	Baudot GetBaudot();

	LorenzMachine lorenzmachine;              // Actual simulation class.
	LorenzWheelCollection wheelcollection;    // Holds the groups of wheels.
    Baudot convert;                           // Converts between ASCII and Baudot-Murray ITA2 code.
    Pindata pindata;                          // Allows access to private and public pins (keys).

	double version;

private:

	bool first;
	int choice;
    bool exit;
    bool draw;


};

#endif