#include "input.h"
void draw()
{
	system("cls"); //for linux system("clear")
	for(int i=0;i<width+2;i++)
		cout<<"#";
	cout<<endl;
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width+2;j++)
		{
			if(j==0)
				cout<<"#";
			if(j==x && i==y)
				cout<<"0";//prints snake head
			else if(j==fruitx && i==fruity)
				cout<<"F";//prints position of fruit which is randomly generated
			else
				{
					bool print=false;
					for(int k=0;k<ntail;k++)
					{
						
						if(tailx[k]==j && taily[k]==i)
							{
								cout<<"o";
								print=true;
							}
							
					}
					if(!print)
							cout<<" ";
				}
			if(j==width-1)
				cout<<"#";
		}
		cout<<endl;
	}
	for(int i=0;i<width+2;i++)
		cout<<"#";
	cout<<endl;
	cout<<"score:"<<score<<endl;
}