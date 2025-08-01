#ifndef BAUDOT_H
#define BAUDOT_H


class Baudot
{
private:

	std::string baudottext;

public:

	char currentChiChar;

	int* baudotdata;
	int* asciidata;

	Baudot();
	~Baudot();

	int loadBaudotData(std::string);
	int loadAsciiData(std::string);

	void setBaudotData(std::string);
	int getBaudotData(int);

	std::string convertToBaudot(char);
	char convertToAscii(int,int,int,int,int);

};

#endif