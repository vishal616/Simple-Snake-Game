#include "draw.h"
void setup()
{
	gameover=false;
	dir=stop;
	x=width/2;
	y=height/2;
	fruitx=rand()%width;
	fruity=rand()%height;
	score=0;

}