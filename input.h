#include "logic.h"
void input()
{
	if(kbhit())//fn in conio.h/bool value/ +ve when key preseed vice versa
	{
		switch(getch())//gets ascii value of key pressed
		{
			case 'a':
				dir=Left;
				break;
			case 'd':
				dir=Right;
				break;
			case 'w':
				dir=Up;
				break;
			case 's':
				dir=Down;
				break;
			case 'x':
				gameover=true;
				break;

		}
	}
}