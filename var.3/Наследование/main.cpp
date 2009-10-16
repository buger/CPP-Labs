#include <iostream.h>
#include "class.h"


void main()
{
	massiv m(10);
	cout<<"The massiv: \n";
	m.Print();
	cout<<endl;
	stek s(10);
	cout<<"\nThe stek after adding value 5: \n";
	s.pop(5);
	s.Print();
	s.pop(19);
	cout<<"\nThe stek after adding value 19: \n";
	s.Print();
	s.pop(12);
	cout<<"\nThe stek after adding value 12: \n";
	s.Print();
	squeue sq(10);
	sq.add(5);
	cout<<"\nThe squeue after adding value 5: \n";
	sq.Print();
	sq.add(19);
	cout<<"\nThe squeue after adding value 19: \n";
	sq.Print();
	sq.add(12);
	cout<<"\nThe squeue after adding value 12: \n";
	sq.Print();
	cin.get();
}