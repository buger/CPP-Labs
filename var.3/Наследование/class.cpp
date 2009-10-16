#include <iostream.h>
#include <stdlib.h>
#include <iomanip.h>
#include "class.h"
int i;


massiv::massiv(int n)
{
	num=new int[n];
	count=n;
	for(i=0; i<Count(); i++)
	{
		num[i]=rand()%10-5;
	}
}

void massiv::Print()
{
	int cnt=Count();
	for(i=0; i<cnt; i++)
	{
		cout<<setw(4)<<num[cnt-i-1];
	}
	cout<<endl;
}

void massiv::Add(int n, int k)
{
	num[n]=k;
}

int massiv::Count()
{
	return count;
}

stek::stek(int n): massiv(n)
{
	top=0;
}

void stek::pop(int k)
{
	Add(top++, k);
}

int stek::Count()
{
	return top;
}

squeue::squeue(int n): massiv(n)
{
	top=0;
}

void squeue::add(int k)
{
	top++;
	int cnt=Count();
	for(i=0; i<cnt; i++)
	{
		num[cnt-i]=num[cnt-i-1];
	}
	num[0]=k;
}

int squeue::Count()
{
	return top;
}