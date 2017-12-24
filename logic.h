#include "variables.h"
void logic()
{
	int prevx=tailx[0];
	int prevy=taily[0];
	int prev2x,prev2y;
	tailx[0]=x;
	taily[0]=y;
	for(int i=1;i<ntail;i++)
	{
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevx;
		taily[i]=prevy;
		prevx=prev2x;
		prevy=prev2y;

	}
	switch(dir)
	{
		case Left:
			x--;
			break;
		case Right:
			x++;
			break;
		case Up:
			y--;
			break;
		case Down:
			y++;
			break;
		default:
			break;
	}
	if(x > width || x<0 || y<0 || y> height)
		gameover=true;
	for(int i=0;i<ntail;i++)
	{
		if(tailx[i]==x && taily[i]==y)
			gameover=true;
	}
	if(x==fruitx && y==fruity)
	{
		score=score+10;
		fruitx=rand()%width;
		fruity=rand()%height;
		ntail++;
	}
}