#pragma once
/*
Создать массив объектов. Вывести:

список книг заданного автора;
список книг, выпущенных заданным издательством;
список книг, выпущенных после заданного года.
Используйте explicit конструктор и константные функции-члены (например, для отображения данных о книге и т.д.)
*/
#include "book class.h"
#include <iostream>
using namespace std;


/*
	unsigned short year;
	unsigned short number_of_pages;

	char* autor = nullptr;
	char* title = nullptr;//book name
	char* publishing_house = nullptr;
*/


class BookArray {
private:
	book* books;
	size_t count;
public:

	BookArray();
	explicit BookArray(size_t s);
	explicit BookArray(const book& b);

	void AddBook(const book& b);

	void ShowBooks() const;
	void ShowBooksByAuthor(const char* author) const;
	void ShowBooksByPublishingHouse(const char* publishing_house) const;
	void ShowBooksAfterYear(unsigned short year) const;

	~BookArray();
};