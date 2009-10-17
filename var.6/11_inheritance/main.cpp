/*
  Лабораторная работа № 11
    Программирование с использованием наследования классов.
  
  Вариант 6
    Разработать программу с использованием наследования классов, реализующую классы:
        - работник больницы
        - медсестра
        - хирург
    Используя виртуальные функции, не зная с объектом какого класса вы работаете, выведите на экран возраст и название должности.
*/

#include <iostream>
using namespace std;
#include <stdlib.h>

// Базовй класс работника
// Так как у всех работников есть общие параметры такие как age и job, определяем их в базовом классе
class Employee 
{
    public:
        int   age;
        const char *job;    
        
        // Конструктор
        Employee(int _age){
            age = _age;
        }
        
        // Вывод данных о сотруднике
        //   Дирректива virtual говорит нам что эта функция может переопределяться в наследуемых классах
        //   В данной ситуации функция будет вызвана если мы не определим её у наследуемого класса
        virtual void printInfo(){
            cout << "Вызвано из базового класса:" << endl;
            cout << "Данные о работнике" << endl;
            cout << "Возраст: " << age << " лет"<< endl;
            cout << "Должность: " << job << endl;
            cout << endl;
        }
};

// Класс работника больницы, наследуем от Employee
class HospitalWorker: Employee
{    
    public:
        // Выполняем конструктор HospitalWorker, и также выполняем конструктор базового класса Employee с параметром age
        HospitalWorker(int age):Employee(age){
            // Устанавливаем тип работы
            job = "работник больницы";
        }

        // Переопределяем информацию о работнике
        void virtual printInfo(){
            cout << "Я "<< job << " и мою полы" << endl;
            cout << "Мне " << age << endl;
            cout << endl;
        }       
};

// Класс Медсестра, наследуем от Employee
//   Не перегружаем у него фунцию printInfo, будет использоваться функция описанная в Employee
class Nurse: Employee
{
    public:
        Nurse(int age):Employee(age){
            job = "медсестра";
        }
};

// Класс Хирург, наследуем от Employee
class Surgeon: Employee
{
    public:
        Surgeon(int age):Employee(age){            
            job = "хирург";
        }

        // Перегружаем функцию printInfo от Employee
        void virtual printInfo(){
            cout << "Я "<< job << " и люблю резать людей" << endl;
            cout << "Мне " << age << endl;
            cout << endl;
        }
};


int main(){
    // Ссылка на объект базового типа
    Employee *employee;

    // Создаем 3-х работников согласно заданию
    HospitalWorker* worker = new HospitalWorker(63);
    Nurse* nurse = new Nurse(35);
    Surgeon* surgeon = new Surgeon(40);    
    
    // Приводим объект к типу Employee
    employee = (Employee *)worker;
    // Будет вызвана функия printInfo класса HospitalWorker
    // Если бы мы не определили функцию как virtual, тогда бы вызвался метод базового класса Employee
    employee->printInfo();

    // Приводим объект к типу Employee
    employee = (Employee *)nurse;
    employee->printInfo();
    // Будет вызвана функция printInfo класса Employee, так как мы не перегрузили её

    // Приводим объект к типу Employee
    employee = (Employee *)surgeon;
    // Будет вызвана функция printInfo класса Surgeon
    employee->printInfo();

    return 1;
}
