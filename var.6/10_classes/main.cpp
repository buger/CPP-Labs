/*
  Лабораторная работа № 10
    Программирование на языке С++ с использованием классов.
  
  Вариант 6
    Определить класс список элементов. 
    В определение класса включить два конструктора для определения списка по его размеру и путем копирования другого списка. 
    Предусмотреть функции инверсии списка (123->321) и поиска подсписка в списке.
*/

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

#include <iomanip>
#include "list.h"
#include "list.cpp"

int main (void)
{
    // Каждый раз генерировать разные случайные числа    
    srand ( time(NULL) );
    
    // создание списка из 20 элементов
    List l1(10);    
    
    // создание списка путем копирования l1
    List l2(l1);
    
    cout << "Список l1" << endl;
    l1.print();	

    cout << "Список l2, копия l1" << endl;
    l2.print();	
    
    cout << "Инвертированный список l1" << endl;
    l1.invert();
    l1.print();	

    // Список l3 будет использоваться для поиска подсписка    
    List l3(1); 
    
    // Найти вхождения списка l3 в l1
    l1.search(l3);

    return 1;
}

