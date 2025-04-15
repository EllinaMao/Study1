// classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "book class.h"
#include "book array.h"
using namespace std;
/*
Задание 1
Создайте класс Book.

Необходимо хранить данные: Автор, Название, Издательство, Год, Количество, страниц.

Создать массив объектов. Вывести:

список книг заданного автора;
список книг, выпущенных заданным издательством;
список книг, выпущенных после заданного года.
Используйте explicit конструктор и константные функции-члены (например, для отображения данных о книге и т.д.)
*/
int main()  
{  
   // Create an array of books  
   int size = 4;  
   book tempbook;
   BookArray books(size);  

   book book1 = {"Oleksandra", "C++", "Step", 2020, 40};
   books.AddBook(book1);
   book1 = {"Natasha", "Programming Basics", "Step", 2018, 300 };
   books.AddBook(book1);
   book1 = {"Oleksandra", "New C++", "Step", 2020, 12 };
   books.AddBook(book1);
   book1 = {"Lala", "Basic texh", "Step", 2010, 150 };
   books.AddBook(book1);



   // Display all books  
   books.ShowBooks();  

   // Display books by a specific author  
   cout << "\nBooks by Oleksandra:\n";  
   books.ShowBooksByAuthor("Oleksandra");  

   // Display books by a specific publishing house  
   cout << "\nBooks published by 'Step':\n";  
   books.ShowBooksByPublishingHouse("Step");  

   // Display books published after a specific year  
   cout << "\nBooks published after 2019:\n";  
   books.ShowBooksAfterYear(2019);  

   return 0;  
}
