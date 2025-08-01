#ifndef LORENZMACHINE_H
#define LORENZMACHINE_H

#include "LorenzWheelCollection.h"
#include "Baudot.h"

class LorenzMachine
{


private:

public:

	char currentDecrypted;
	char currentEncrypted;

	LorenzMachine();
	~LorenzMachine();

	std::string encrypt(LorenzWheelCollection&,Baudot&,std::string,bool);
	char* encryptDiary(std::string,LorenzWheelCollection&,Baudot&);
	char* encryptDiarySilent(std::string,LorenzWheelCollection&,Baudot&);

	std::string decrypt(LorenzWheelCollection&,Baudot&,std::string,bool);
	char* decryptDiary(std::string,LorenzWheelCollection&,Baudot&);
	char* decryptDiarySilent(std::string,LorenzWheelCollection&,Baudot&);

};




#endif