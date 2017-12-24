#include <iostream>
#include <conio.h>
#include <windows.h>
#include "setup.h"
using namespace std;


int main()
{
	setup();
	while(!gameover)
	{
		draw();
		input();
		logic();
		Sleep(60);//capital s
	}
	return 0;
}
