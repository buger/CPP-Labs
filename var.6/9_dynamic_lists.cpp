/*
  Лабораторная работа № 9
    Программирование задач с использованием динамических структур данных на языке С++ 
  
  Вариант 6
    Описать функцию, которая вставляет в стэк К новый элемент L1 за каждым вхождением элемента L. 
    Значения элементов L и L1 ввести с клавиатуры.
*/

// На этот файл не обращать внимание
#include "../vs_compatibility_for_linux.h"

#include <iostream>
using namespace std;
#include <stdlib.h>

//Структура элемента стэка
struct Node
{
    //В data будут хранится данные
    int data;

    // link ссылка на следующий элемент
    Node *next;
};

// Создание синонима NodePtr для указателя на нашу структуру Node
typedef Node* NodePtr;


/*
   Вывод стэка на экран
     head - головной элемент стэка
*/
void PrintList(NodePtr head){
    NodePtr current; // Указатель на текущий элемент

    // Установим в начало
    current = head;

    // Делаем цикл, пока не дойдем до последнего элемента, у которого next NULL
    while(current != NULL)
    { 
        // Вывод значения текущего элемента
        cout << current->data << ' ';

        // Переходим к следующему элементу
        current = current->next;
    }
    
    // перейдем на следующую строку
    cout <<endl;    
}

//Точка входа в программу
int main()
{
    int N; // Количество элементов в списке

    int L; // L из условия задачи
    int L1; // L1 из условия задачи

    NodePtr head = NULL; // Указатель на начало стэка
    NodePtr current;  // Указатель на текущий элемент

    NodePtr new_element; // Используется для изменения текущего списка
    
    // Очищать экран, перед запуском программы
    clrscr();

    // Каждый раз генерировать разные случайные числа    
    randomize();

    cout << "Введите количество элементов в списке: ";
    cin >> N; // Ожидаем ввода пользователя

    // Формируем стек из N элементов
    for (int i = 0; i<N; i++)  		// формируем стек
    { 
        // Если head равно NULL, значит наш стэк еще пуст, и нам надо созать первый элемент
        if (head == NULL)
        { 
            // Создаем новый элемент типа Node, который будет первым в стэке
            head = new Node;            
            
            // Заполняем значение элемента случайными числами от -5 до 5
	    head->data = random(10) - 5;
            
            // Устанавливаем значение link в NULL, так как это первый элемент нашего стэка
	    head->next = NULL;
        }
	else  
        {   
            // Создаем новый элемент типа Node
            current = new Node;
            
            current->data = random(10) - 5;

            // Для нового элемента, следующим будет последний созданный, который постоянно находится в head
	    current->next = head;

            // Теперь первым элементом в стэке должен стать current
	    head = current;
        }
    }

    // Выведем только что сгенерированный список
    cout << "Список: "; 
    PrintList(head);

    cout << "Введите элемент L для поиска: ";
    cin >> L;
    cout << endl;
    
    cout << "Введите элемент L1 для вставки: ";
    cin >> L1;
    cout << endl;
    
    
    // Для выполнения задачи, нам необходимо сделать цикл по всем элементам списка
    // Установим на начало стэка
    current = head;
    // Делаем цикл, пока не дойдем до последнего элемента, у которого next NULL
    while(current != NULL)
    { 
        if(current->data == L){
            // Если нашли элемент с значением L, то создаем новый элемент, 
            // для вставки в цикл, и задаем ему значение L1
            new_element = new Node;
            new_element->data = L1;

            //Мы должны вставить новый элемент в стэк
            // Схема вставки:
            //   Было: current --> next
            //   Надо: current --> new --> next
            new_element->next = current->next;
            current->next = new_element;

            // Уставнавливаем текущим элементом наш новосозданный new_element
            current = new_element;
        }

        // Переходим к следующему элементу
        current = current->next;
    }

    cout << "Измененный список: "; 
    // Выведем измененный список
    PrintList(head);

    return 1;
}


