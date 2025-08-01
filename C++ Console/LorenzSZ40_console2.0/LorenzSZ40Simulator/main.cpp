/*

                Tom Taylor - 2013-2015

                Lorenz SZ40 Encryption Machine.

                This program simulates the famous encryption machine built
                by the Nazis to succeed Enigma.

                It can also act as a diary to encrypt documents.

                                                                                                                */


// Include Lorenz Manager and by proxy the other classes needed to run the machine.
#include "LorenzManager.h"

int main( int argc, char *argv[] ) {
    
	// This loads the manager that deals with the Lorenz Machine.
	LorenzManager manager;

	// If the program is launched with arguments then this function will deal with them.
	// If there aren't any arguments then the function continues on.
	if ( manager.ArgumentManager(argc,argv) != 0) { return 0; }

	// If there are no arguments then the manager will go into the menu loop. 
	while ( !manager.ShouldIQuit() )
    {
		// Starts the machine at the console menu, then the manager will take over.
		manager.ConsoleMenu();
    }

	// Exit the entire program and shut down with no errors.
	return 0;
}
