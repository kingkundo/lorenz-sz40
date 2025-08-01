/*

        Tom Taylor - 2015

		Lorenz Manager class

		This is the class that controls all the others. I have taken all
		of the code that was originally in the main CPP file and transferred it here.

		This allows me to bolt on the program to other custom programs that I create
		by simply including the LorenzManager (this) class to the project.

		This will allow me to use my own custom encryption tool for save games
		and so on. Pretty neat.


																						  */
// STD and Misc headers.
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>

// Lorenz Machine specific headers.
#include "LorenzWheel.h"
#include "LorenzWheelCollection.h"
#include "Baudot.h"
#include "LorenzMachine.h"
#include "Pindata.h"
#include "Screen.h"
#include "LorenzManager.h"

// Shortening the names for STD functions.
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::time;
using std::ofstream;
using std::ifstream;
using std::stringstream;

// Multiplatform catching defines.
#ifdef _WIN32
#define CLEAR "CLS"
#else
#define CLEAR "clear"
#endif

// Pointless warning that can't screw things up.
// Worth ignoring at compile.
// They are about the ASCII art title that I have.
#pragma warning(disable : 4996)

// Constructor.
LorenzManager::LorenzManager () 
{ 
	SeedRandomNumbers();
	version = 5.1;
	first = true;
    exit = false;
    draw = false;

	// Sets current PIN to the public PIN.
	wheelcollection.setAllPinData(pindata.getPublicPin());
        
	// Set wheels to their initial conditions.
	wheelcollection.setUpWheels();
}

// Destructor.
LorenzManager::~LorenzManager() { }

// Seeds the Random Number Generator.
void LorenzManager::SeedRandomNumbers()
{
	// Seed the random number generator (for later).
    srand ( ( unsigned int ) time ( NULL ) );
}

// Displays the Lorenz Machine menu.
void LorenzManager::ConsoleMenu()
{
		if ( first ) { window.OldVersionSetup(150,150,900,650); first = false; }
		
		// Print title screen.
        PrintTitle();

		// Print out menu.
        cout << "     Please select an option by typing the number and pressing the enter key." << endl << endl;

        cout << "              Encrypt some text                               1" << endl;
        cout << "              Decrypt some text                               2" << endl; 

        cout << endl;
        cout << "              Draw machine?                 (Currently: "; 
        if ( draw == true ) { cout << "On)   3"; } else { cout << "Off)  3"; }
        cout << endl;
		cout << "              (Slower but cool)" << endl << endl;

        cout << "              Write a diary entry                             4" << endl;
        cout << "              Load a diary entry                              5" << endl << endl;

        cout << "              Generate a personal PIN (Advanced)              6" << endl;
        cout << "              Import a generated PIN (Advanced)               7" << endl;
        cout << "              Set where the wheels start (Advanced)           8" << endl << endl;

        cout << "              Save a full configuration of current machine    9" << endl;
        cout << "              Import a full configuration of the machine     10" << endl << endl;
        cout << "              Exit                                            0 " << endl << endl;
        cout << "                                      > ";

        // Program branches off depending on user input.
        if ( cin >> choice )
        {
            if ( choice == 1) { wheelcollection.setUpWheels(); ConsoleEncrypt(); }								// 1 for encryption. (Also resets the wheels).
            else if ( choice == 2) { wheelcollection.setUpWheels(); ConsoleDecrypt(); }						// 2 for decryption. (Also resets the wheels).
            else if ( choice == 3) { if ( draw == true ) { draw = false; } else { draw = true; } }		// 3 for changing of the draw function.
            else if ( choice == 4) { wheelcollection.setUpWheels(); WriteDiaryEntry(); }				// 4 for writing an encrypted diary entry.
            else if ( choice == 5) { wheelcollection.setUpWheels(); ReadDiaryEntry(); }					// 5 for reading an encrypted diary entry.
            else if ( choice == 6) { GeneratePIN(); }													// 6 to generate a new pin (key) for use in the encryption method.
            else if ( choice == 7) { ViewPIN(); }														// 7 to view the current pin (key) that the machine is using.
            else if ( choice == 8) { SetPIN(); }														// 8 to change the position of the wheels so that encryption text is differed.
            else if ( choice == 9) { SaveConfig(); }													// 9 to save a full configuration of current data.
            else if ( choice == 10) { LoadConfig(); }													// 10 to load in a full configuration.
            else if ( choice == 0) { exit = true; }														// 0 to quit.
        } else {  }  // If invalid or wild value, just safetly quit.
}

// Displays the encryption screen.
void LorenzManager::ConsoleEncrypt()
{

            PrintTitle();

			string encrypted;

            cout << endl;
            cout << "                                 Encryption" << endl;
            cout << "                                 ~~~~~~~~~~" << endl << endl;

			// String to encrypt.
			string newMessage;

			cout << "             Enter the message that you would like to encrypt:" << endl << endl;
			getline(cin,newMessage); getline(cin,newMessage); // Get user input for encrypted text.

            // Launches the lorenz machine to encrypt the text provided.
            // Passes the wheels and baudot code by reference.
            if ( draw == true ) { encrypted = lorenzmachine.encrypt(wheelcollection,convert,newMessage,true); }
            else { encrypted = lorenzmachine.encrypt(wheelcollection,convert,newMessage,false); }

			PrintTitle();

			cout << endl;
			cout << "                         Your encrypted message is:" << endl << endl;

			cout << encrypted << endl << endl;

			cout << "                         Press 0 and enter to return." << endl << endl;
			cout << "                                    > ";

            // Input to determine the state of the loop.
            if ( cin >> choice )
            {
                if ( choice == 0 ) // If 0 then quit.
                {
                    return;
                } 
                // Reset the wheels otherwise.
                else { wheelcollection.setUpWheels(); }
            }
        }

// Displays the decryption screen.
void LorenzManager::ConsoleDecrypt()
{
            PrintTitle();

			string decrypted;

            cout << endl;
            cout << "                                 Decryption" << endl;
            cout << "                                 ~~~~~~~~~~" << endl << endl;

			// String to decrypt.
			string newMessage;

			cout << "             Enter the message that you would like to decrypt:" << endl << endl;
			getline(cin,newMessage); getline(cin,newMessage); // Get user input for decrypted text.

            // Launches the lorenz machine to decrypt the text provided.
            // Passes the wheels and baudot code by reference.
            if ( draw == true ) { decrypted = lorenzmachine.decrypt(wheelcollection,convert,newMessage,true); }
            else { decrypted = lorenzmachine.decrypt(wheelcollection,convert,newMessage,false); }

			PrintTitle();

			cout << endl;
			cout << "                         Your decrypted message is:" << endl << endl;

			cout << decrypted << endl << endl;

			cout << "                         Press 0 and enter to return." << endl << endl;
			cout << "                                    > ";

            // Input to determine the state of the loop.
            if ( cin >> choice )
            {
                if ( choice == 0 ) // If 0 then quit.
                {
                    return;
                } 
                // Reset the wheels otherwise.
                else { wheelcollection.setUpWheels(); }
            }

        }

// Encrypts silently
string LorenzManager::Encrypt(string newMessage1, bool draw1)
{
	return lorenzmachine.encrypt(wheelcollection,convert,newMessage1,draw1);
}

// Decrypts silently
string LorenzManager::Decrypt(string newMessage1, bool draw1)
{
	return lorenzmachine.decrypt(wheelcollection,convert,newMessage1,draw1);
}

// Displays the screen to write a diary.
void LorenzManager::WriteDiaryEntry()
{

            string name;
            string entryName;
            string diaryEntry;

            time_t t = time(0); // Get the time
            struct tm * now = localtime ( &t );

            PrintTitle();
            cout << endl;
            cout << "                              Write Diary Entry" << endl;
            cout << "                              ~~~~~~~~~~~~~~~~~" << endl << endl;

            cout << "                       Please enter a name for this entry" << endl;
            cout << "                         Note: This name is unencrypted" << endl << endl;
            cout << "                       > ";
            cin.sync(); getline ( cin, name ); name.append(".ouc");
            
            PrintTitle();
            cout << endl << endl;
            cout << "                   Please type in your diary entry's subject:" << endl << endl;
            cout << "                       > ";
            cin.sync();
            getline(cin,entryName);

            PrintTitle();
            cout << endl << endl;
            cout << "                 Please type in your diary entry for ";
            cout << now->tm_mday << "/" << (now->tm_mon+1) << "/" << (now->tm_year+1900) << ": ";

            cout << endl << endl;
            cin.sync();
            getline(cin,diaryEntry);

            char* encryptedText = NULL;
            char* encryptedText2 = NULL;
            
            if ( draw == true ) { PrintTitle(); encryptedText = lorenzmachine.encryptDiary(entryName,wheelcollection,convert); PrintTitle(); encryptedText2 = lorenzmachine.encryptDiary(diaryEntry,wheelcollection,convert); }
            else { encryptedText = lorenzmachine.encryptDiarySilent(entryName,wheelcollection,convert); encryptedText2 = lorenzmachine.encryptDiarySilent(diaryEntry,wheelcollection,convert); }

            ofstream newDiaryEntry ( name/*, ios::app*/);

            if ( newDiaryEntry.is_open())
            {
                newDiaryEntry << now->tm_mday << "/" << (now->tm_mon+1) << "/" << (now->tm_year+1900) << "\n";

                for ( unsigned int i = 0; i < entryName.size(); i++)
                {
                    newDiaryEntry << encryptedText[i];
                }

                newDiaryEntry << "\n";

                for ( unsigned int i = 0; i < diaryEntry.size(); i++)
                {
                    newDiaryEntry << encryptedText2[i];
                }
            }

			PrintTitle();
            cout << endl << endl;
            cout << "                Diary entry has been saved as " << name << endl << endl;
            
            cout << "                        "; Pause();
            choice = 0;

            delete[] encryptedText;
            delete[] encryptedText2;

            // Input to determine the state of the loop.
            if ( choice == 0 ) // If 0 then quit.
            {
                return;
            } 
            else { }
        }

// Displays the screen to load a diary.
void LorenzManager::ReadDiaryEntry()
{

            PrintTitle();
            cout << "                               Load Diary Entry" << endl;
            cout << "                               ~~~~~~~~~~~~~~~~" << endl << endl;

            string name;
            string date;
            string entryName;
            string diaryEntry;

            cout << "                           What is this entry's name?" << endl << endl;
            cout << "                               > ";
            cin.sync();getline ( cin, name ); name.append(".ouc");

            ifstream newDiaryEntry ( name );

            PrintTitle();

            if ( newDiaryEntry.is_open())
            {

                getline ( newDiaryEntry,date);
                getline ( newDiaryEntry,entryName);
                getline ( newDiaryEntry,diaryEntry);

                char* decryptedText = NULL;
                char* decryptedText2 = NULL;
            
                if ( draw == true ) { PrintTitle(); decryptedText = lorenzmachine.decryptDiary(entryName,wheelcollection,convert); PrintTitle(); decryptedText2 = lorenzmachine.decryptDiary(diaryEntry,wheelcollection,convert); }
                else { decryptedText = lorenzmachine.decryptDiarySilent(entryName,wheelcollection,convert); decryptedText2 = lorenzmachine.decryptDiarySilent(diaryEntry,wheelcollection,convert); }

                PrintTitle();
                cout << endl;

                cout << "                         Entry date: " << date << endl << endl;

                cout << "                      Entry Subject: ";;
                for ( unsigned int i = 0; i < entryName.size(); i++)
                {
                    cout << decryptedText[i];
                }
                
                cout << endl << endl;
                cout << "                               Diary Entry: " << endl << endl;
                for ( unsigned int i = 0; i < diaryEntry.size(); i++)
                {
                    cout << decryptedText2[i];
                }

                cout << endl;
                delete[] decryptedText;
                delete[] decryptedText2;
            } else { cout << endl << endl << "                     This diary entry has not been found..." << endl; }

            cout << endl << endl << "                         ";  Pause();
            choice = 0;


            // Input to determine the state of the loop.
            if ( choice == 0 ) // If 0 then quit.
            {
                return;
            } 
            else { }
        }

// Displays the screen to generate a personal PIN.
void LorenzManager::GeneratePIN()
{
            PrintTitle();
            string newPinName;
            char newchoice;
            srand ((unsigned int) time ( NULL ));
            int newPin[501];
            
            cout << "                          Generate pin (key) data:" << endl;
            cout << "                          ~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

            cout << "                  Do you want to create new pin data? (y/n)" << endl << endl;
            cout << "                                > "; cin >> newchoice;
            cout << endl << endl;

            if ( newchoice != 'y')
            {
                return;
            }

            else
            {

            cout << "                    What would you like to name your pin?" << endl << endl;
            cout << "                             > "; cin >> newPinName; cout << endl << endl;
            newPinName.append(".dat");

            ofstream newPinData;
            newPinData.open ( newPinName );

            cout << "                         New pin reads as follows:" << endl;
            for ( int i = 0; i < 501; i++ )
            {
                newPin[i] = rand() % 2;
                cout << newPin[i];
                newPinData << newPin[i];
            } newPinData.close();

            cout << endl << endl;
            cout << "                      Your pin is saved as: " << newPinName << endl;
            cout << "                   You can load this pin through the menu.." << endl;
            cout << "                      Press enter to return to the menu." << endl;
            cin.sync(); cin.ignore();

            return;
            }
        }

// Displays the screen to view the current PIN loaded.
void LorenzManager::ViewPIN()
{

            PrintTitle();
            char newchoice;
            string newPinSettings;

            string oldPinValues = wheelcollection.getAllPinData();

            cout << "                           Current Pin data value:" << endl;
            cout << "                           ~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

            cout << oldPinValues << endl << endl;

            cout << "                 Do you want to import new pin data? (y/n)" << endl << endl;
            cout << "                                > "; cin >> newchoice;
            cout << endl << endl;

            if ( newchoice == 'y')
            {
                cout << "                 What is the name of the pin settings file?" << endl << endl;
                cout << "                             > "; cin >> newPinSettings; newPinSettings.append(".dat");
                wheelcollection.importPinData(newPinSettings);

                if ( oldPinValues == wheelcollection.getAllPinData() )
                {
                    cout << endl;
                    cout << "          Pin values haven't changed... Check your pin data file!" << endl;
                    cout << "                   Press enter to go back to the menu.." << endl << endl;
                    cin.sync(); cin.ignore();
                }
                else
                {
                    cout << endl;
                    cout << "                    Pin settings changed successfully." << endl;
                    cout << "                   Press enter to go back to the menu.." << endl << endl;
                    cin.sync(); cin.ignore();
                }
            }

            return;
        }

// Displays the screen to set the current PIN loaded.
void LorenzManager::SetPIN()
{

            PrintTitle();
            wheelcollection.setUpWheels();
            int change;
            int newNumber;

            cout << "                          Current Wheel Positions:" << endl;
            cout << "                          ~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

            cout << " These numbers are 1 by default. To encrypt more heavily, change these values," << endl;
            cout << "     however, to decrypt the text again you need to set the values back." << endl << endl;

            cout << "                          Psi 1 Position: " << wheelcollection.Ψ1.getWheelPosition() << "/" << wheelcollection.Ψ1.getMaxSize() << "  (1)" << endl;
            cout << "                          Psi 2 Position: " << wheelcollection.Ψ2.getWheelPosition() << "/" << wheelcollection.Ψ2.getMaxSize() << "  (2)" << endl;
            cout << "                          Psi 3 Position: " << wheelcollection.Ψ3.getWheelPosition() << "/" << wheelcollection.Ψ3.getMaxSize() << "  (3)" << endl;
            cout << "                          Psi 4 Position: " << wheelcollection.Ψ4.getWheelPosition() << "/" << wheelcollection.Ψ4.getMaxSize() << "  (4)" << endl;
            cout << "                          Psi 5 Position: " << wheelcollection.Ψ5.getWheelPosition() << "/" << wheelcollection.Ψ5.getMaxSize() << "  (5)" << endl << endl;

            cout << "                            M37 Position: " << wheelcollection.Μ37.getWheelPosition() << "/" << wheelcollection.Μ37.getMaxSize() << " (6)" << endl;
            cout << "                            M61 Position: " << wheelcollection.Μ61.getWheelPosition() << "/" << wheelcollection.Μ61.getMaxSize() << " (7)" << endl << endl;

            cout << "                          Chi 1 Position: " << wheelcollection.Χ1.getWheelPosition() << "/" << wheelcollection.Χ1.getMaxSize() << "  (8)" << endl;
            cout << "                          Chi 2 Position: " << wheelcollection.Χ2.getWheelPosition() << "/" << wheelcollection.Χ2.getMaxSize() << "  (9)" << endl;
            cout << "                          Chi 3 Position: " << wheelcollection.Χ3.getWheelPosition() << "/" << wheelcollection.Χ3.getMaxSize() << "  (10)" << endl;
            cout << "                          Chi 4 Position: " << wheelcollection.Χ4.getWheelPosition() << "/" << wheelcollection.Χ4.getMaxSize() << "  (11)" << endl;
            cout << "                          Chi 5 Position: " << wheelcollection.Χ5.getWheelPosition() << "/" << wheelcollection.Χ5.getMaxSize() << "  (12)" << endl << endl;

            cout << "      Enter the number in the brackets of the wheel you want to change:" << endl;
            cout << "                       ( Randomise wheel settings - 13 )" << endl;
            cout << "                           ( Return to main menu - 0 )" << endl << endl;
            cout << "                                     > "; cin >> change; cout << endl;

            if ( change == 13 )
            {
                wheelcollection.Ψ1.setDefaultWheelPosition( rand() % 43 + 1 );
                wheelcollection.Ψ2.setDefaultWheelPosition( rand() % 47 + 1 );
                wheelcollection.Ψ3.setDefaultWheelPosition( rand() % 51 + 1 );
                wheelcollection.Ψ4.setDefaultWheelPosition( rand() % 53 + 1 );
                wheelcollection.Ψ5.setDefaultWheelPosition( rand() % 59 + 1 );
                wheelcollection.Μ37.setDefaultWheelPosition( rand() % 37 + 1 );
                wheelcollection.Μ61.setDefaultWheelPosition( rand() % 61 + 1 );
                wheelcollection.Χ1.setDefaultWheelPosition( rand() % 41 + 1 );
                wheelcollection.Χ2.setDefaultWheelPosition( rand() % 31 + 1 );
                wheelcollection.Χ3.setDefaultWheelPosition( rand() % 29 + 1 );
                wheelcollection.Χ4.setDefaultWheelPosition( rand() % 26 + 1 );
                wheelcollection.Χ5.setDefaultWheelPosition( rand() % 23 + 1 );
            }

            else if ( change == 1 )
            { 
                int maxSize = 43;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 43 ): "; cin >> newNumber; cout << endl;
                
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Ψ1.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 2 )
            { 
                int maxSize = 47;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 47 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Ψ2.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 3 )
            { 
                int maxSize = 51;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 51 ): "; cin >> newNumber; cout << endl; 
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Ψ3.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 4 )
            { 
                int maxSize = 53;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 53 ): "; cin >> newNumber; cout << endl; 
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Ψ4.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 5 )
            { 
                int maxSize = 59;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 59 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Ψ5.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 6 )
            { 
                int maxSize = 37;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 37 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Μ37.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 7 )
            { 
                int maxSize = 61;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 61 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Μ61.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 8 )
            { 
                int maxSize = 41;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 41 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Χ1.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 9 )
            { 
                int maxSize = 31;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 31 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Χ2.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 10 )
            { 
                int maxSize = 29;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 29 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Χ3.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 11 )
            { 
                int maxSize = 26;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 26 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Χ4.setDefaultWheelPosition(newNumber);
                }
            }
            else if ( change == 12 )
            { 
                int maxSize = 23;
                cout << endl << "    What number would you like the wheel to start on? ( 1 - 23 ): "; cin >> newNumber; cout << endl;
                if ( newNumber > 0 && newNumber < ( maxSize + 1 ))
                {
                    wheelcollection.Χ5.setDefaultWheelPosition(newNumber);
                }
            }
            else { return; }
        }

// Displays the screen to save a full config of the machine.
void LorenzManager::SaveConfig()
{

            PrintTitle();
            char save;
            cout << "                         Save a full configuration:" << endl;
            cout << "                         ~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

            cout << "                Do you want to save a full config file? (y/n)" << endl << endl;
            cout << "                                 > "; cin >> save; cout << endl << endl;

            if ( save == 'n' ) { return; }
            else
            {
                string newConfName;
                cout << "                What would you like to name this config file?" << endl << endl;
                cout << "                         > "; cin >> newConfName; cout << endl << endl;
                newConfName.append(".lconf");

                ofstream config;
                config.open ( newConfName );

                if ( config.is_open() )
                {

                    string currentPinValue = wheelcollection.getAllPinData();
                    int wheelvals[12] = { wheelcollection.Ψ1.getDefaultWheelPosition(), wheelcollection.Ψ2.getDefaultWheelPosition(),
                    wheelcollection.Ψ3.getDefaultWheelPosition(), wheelcollection.Ψ4.getDefaultWheelPosition(),
                    wheelcollection.Ψ5.getDefaultWheelPosition(), wheelcollection.Μ37.getDefaultWheelPosition(),
                    wheelcollection.Μ61.getDefaultWheelPosition(), wheelcollection.Χ1.getDefaultWheelPosition(),
                    wheelcollection.Χ2.getDefaultWheelPosition(), wheelcollection.Χ3.getDefaultWheelPosition(),
                    wheelcollection.Χ4.getDefaultWheelPosition(), wheelcollection.Χ5.getDefaultWheelPosition() };

                    config << currentPinValue << "\n";

                    for ( int i = 0; i < 12; i++ )
                    {
                        config << wheelvals[i] << "\n";
                    }

                    config.close();
                    cout << "              Configuration created successfully as: " << newConfName << endl << endl;
                    cout << "                  IMPORTANT! THIS NEEDS TO BE KEPT PRIVATE!" << endl;
                    cout << "                  MAKE SURE ONLY YOU AND WHOEVER YOU WANT TO" << endl;
                    cout << "                 READ YOUR DOCUMENTS HAS ACCESS TO THIS KEY!!" << endl << endl;
                    cout << "                      Press enter to return to menu." << endl;
                    cin.sync(); cin.ignore();
                } else
                
                // If file couldn't  be saved.
                {
                    cout << "                     Configuration couldn't be saved!" << endl;
                    cout << "                      Press enter to return to menu." << endl;
                    cin.sync(); cin.ignore();
                }

            }

            return;
        }

// Displays the screen to load a full config of the machine.
void LorenzManager::LoadConfig()
{
            PrintTitle();
            char load;
            cout << "                        Import a full configuration:" << endl;
            cout << "                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

            cout << "                Do you want to load a full config file? (y/n)" << endl << endl;
            cout << "                                 > "; cin >> load; cout << endl << endl;

            if ( load == 'n' ) { return; }
            else
            {
                string newConfName;
                cout << "                  What is the name of this config file?" << endl << endl;
                cout << "                        > "; cin >> newConfName; cout << endl << endl;
                newConfName.append(".lconf");
                ifstream config;
                config.open ( newConfName );

                if ( config.is_open() )
                {

                    string temp;
                    string fromfile[13];
                    int wheelvals[12];
                    int temp2 = 0;

                    while ( getline(config,temp))
                    {
                        fromfile[temp2] = temp;
                        temp2++;
                    } temp2 = 0;

                    // Convert strings imported into ints.
                    stringstream conversion;

                    for ( int i = 0; i < 13; i++ )
                    {
                        if ( i != 0 )
                        {
                            conversion.clear();
                            conversion << fromfile[i];
                            conversion >> wheelvals[i];
                        }
                    }

                    // Set pin data.
                    wheelcollection.setAllPinData(fromfile[0]);
                    wheelcollection.Ψ1.setDefaultWheelPosition(wheelvals[1]);
                    wheelcollection.Ψ2.setDefaultWheelPosition(wheelvals[2]);
                    wheelcollection.Ψ3.setDefaultWheelPosition(wheelvals[3]);
                    wheelcollection.Ψ4.setDefaultWheelPosition(wheelvals[4]);
                    wheelcollection.Ψ5.setDefaultWheelPosition(wheelvals[5]);
                    wheelcollection.Μ37.setDefaultWheelPosition(wheelvals[6]);
                    wheelcollection.Μ61.setDefaultWheelPosition(wheelvals[7]);
                    wheelcollection.Χ1.setDefaultWheelPosition(wheelvals[8]);
                    wheelcollection.Χ2.setDefaultWheelPosition(wheelvals[9]);
                    wheelcollection.Χ3.setDefaultWheelPosition(wheelvals[10]);
                    wheelcollection.Χ4.setDefaultWheelPosition(wheelvals[11]);
                    wheelcollection.Χ5.setDefaultWheelPosition(wheelvals[12]);

                    config.close();
                    cout << "                    Configuration loaded successfully.." << endl;
                    cout << "                      Press enter to return to menu." << endl;
                    cin.sync(); cin.ignore();
                    } else
            
                // If couldn't load file
                {
                    cout << "                        Couldn't find config file!" << endl;
                    cout << "                      Press enter to return to menu." << endl;
                    cin.sync(); cin.ignore();
                }
            }

        return;
        }

// Returns the Lorenz Machine.
LorenzMachine LorenzManager::GetLorenzMachine()
{
	return lorenzmachine;
}

// Returns the Lorenz Wheels.
LorenzWheelCollection LorenzManager::GetWheels()
{
	return wheelcollection;
}

// Manages the arguments and parameters that may come through the command line.
int LorenzManager::ArgumentManager(int argc, char* argv[])
{

// If there is an argument from cmd line:
	if (argc != 1 )
	{

		for(int i = 0; i < argc; i++)
		{
			string currentArgument(argv[i]);

			// Encryption (ONLY ONE WORD AT THE MOMENT)
			if ( currentArgument == "-e" && argv[i+1] )
			{
				string nextArgument(argv[i+1]);
				cout << endl << "Encrypted: " << Encrypt(nextArgument,false) << endl;
			}

			// Decryption (ONLY ONE WORD AT THE MOMENT)
			if ( currentArgument == "-d" && argv[i+1] )
			{
				string nextArgument(argv[i+1]);
				cout << endl << "Decrypted: " << Decrypt(nextArgument,false) << endl;
			}

			// Load custom PIN data for machine
			if ( currentArgument == "-p" && argv[i+1] )
			{
				string nextArgument(argv[i+1]);
				wheelcollection.setAllPinData(nextArgument);

				cout << endl << "PIN data imported." << endl;
			}

			//cout << "argv[" << i << "] = " << argv[i] << endl; 
		 
		}

		return 1;
	}
	
	return 0;
}

// Prints out the title of the machine in ASCII art.
void LorenzManager::PrintTitle()
{
	system(CLEAR);

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
	cout << "                   MMMMMMMMMMM MMMMMMMMMMM" << endl << endl;
	
	cout << "                                    v" << version << endl << endl;
	cout << "                               Tom Taylor 2014" << endl << endl;

	/*cout << endl << endl << endl;
	cout << "              ....            .\n";
	cout << "          .xH888888Hx.       @88>                          ..\n";
	cout << "         .H8888888888888:     %8P                .u    .   @L\n";
	cout << "         888*'''?''*88888X     .         u     .d88B :@8c 9888i   .dL\n";
	cout << "        'f     d8x.   ^%88k  .@88u    us888u. ='8888f8888r`Y888k:*888.\n";
	cout << "        '>    <88888X   '?8 ''888E`.@88 '8888'  4888>'88'   888E  888I\n";
	cout << "         `:..:`888888>    8>  888E 9888  9888   4888> '     888E  888I\n";
	cout << "                `'*88     X   888E 9888  9888   4888>       888E  888I\n";
	cout << "           .xHHhx..'      !   888E 9888  9888  .d888L .+    888E  888I\n";
	cout << "          X88888888hx. ..!    888& 9888  9888  ^'8888*'    x888N><888'\n";
	cout << "         !   '*888888888'     R888''888*''888'    'Y'       '88'  888\n";
	cout << "                ^'***'`        ''   ^Y'   ^Y'                     88F\n";
	cout << "                                                                 98'\n";
	cout << "                                                               ./'\n";
	cout << "                                                             ~`\n";
	cout << "                               Tom Taylor 2014" << endl;
	cout << "                                    v" << version << endl << endl;*/

	}

// Tests whether the app should close by polling the exit variable.
bool LorenzManager::ShouldIQuit()
{
	return exit;
}

// Pauses the machine. This will soon be multiplatform.
void LorenzManager::Pause()
{
	// This is where multiplatform code for pausing will go eventually.
	system("pause");
}