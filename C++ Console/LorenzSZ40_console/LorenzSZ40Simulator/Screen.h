#ifndef SCREEN_H
#define SCREEN_H


class Screen
{

public:

	Screen();
	~Screen();

	void SetupScreen();

	void OldVersionSetup();
	void OldVersionSetup(int,int,int,int);

private:


	int posX;
	int posY;

	int screenX;
	int screenY;

};

#endif