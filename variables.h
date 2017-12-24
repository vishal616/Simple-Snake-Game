#include <iostream>
using namespace std;
bool gameover;
const int width=20;
const int height=20;
int x,y,fruitx,fruity,score;
int tailx[100],taily[100];
int ntail;//lenght of tail
enum direction {stop=0,Left,Right,Up,Down};
direction dir;