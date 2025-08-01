#ifndef PINDATA_H
#define PINDATA_H

class Pindata
{
public:
	Pindata();
	~Pindata();

	std::string getPublicPin();

protected:

	std::string publicpin;

};

#endif