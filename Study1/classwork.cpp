// classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "book class.h"
#include "book array.h"
using namespace std;
/*
������� 1
�������� ����� Book.

���������� ������� ������: �����, ��������, ������������, ���, ����������, �������.

������� ������ ��������. �������:

������ ���� ��������� ������;
������ ����, ���������� �������� �������������;
������ ����, ���������� ����� ��������� ����.
����������� explicit ����������� � ����������� �������-����� (��������, ��� ����������� ������ � ����� � �.�.)
*/
int main()  
{
   // Create an array of books  
	book book1("Oleksandra", "C++", "Step", 2020, 40);
	book book2("Natasha", "Programming Basics", "Step", 2018, 300);
	book book3("Oleksandra", "New C++", "Step", 2020, 12);
	book book4("Lala", "Basic tech", "Step", 2010, 150);

	BookArray books;

	books.AddBook(book1);
	books.AddBook(book2);
	books.AddBook(book3);
	books.AddBook(book4);

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
