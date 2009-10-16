#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "func.h"
const int r1=7;
const int r2=8;
const int r3=6;
void main()
{
int M[r1],L[r2],C[r3];
randomize();
clrscr();
form(M,L,C,r1,r2,r3);
func(M,L,C,r1,r2,r3);
	getch();
}

