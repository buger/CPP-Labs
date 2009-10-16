/*
   Данный файл предназначен для упрощения компиляции проектов Visual Studio под gcc
*/
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

void randomize()
{
    srand ( time(NULL) );
}

int random(int num)
{
    return rand() % num;
}

void clrscr(){
    system("clear");
}
