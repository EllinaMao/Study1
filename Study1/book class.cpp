#include "book class.h"
/*
	unsigned short year;
	unsigned short number_of_pages;

	char* autor = nullptr;
	char* title = nullptr;//book name
	char* publishing_house = nullptr;
*/

book::book()
{
	year = 0;
	number_of_pages = 0;
	autor = new char [8] {"Unknown"};
	title = new char [8] {"Unknown"};
	publishing_house = new char [8] {"Unknown"};

}

book::book(const char* au, const char* ti, const char* p_h, unsigned short yr, unsigned short np)
{
	autor = new char[strlen(au) + 1];
	strcpy_s(autor, strlen(au) + 1, au);

	title = new char[strlen(ti) + 1];
	strcpy_s(title, strlen(ti) + 1, ti);

	publishing_house = new char[strlen(p_h) + 1];
	strcpy_s(publishing_house, strlen(p_h) + 1, p_h);

	year = yr;
	number_of_pages = np;
}

//void book::InputBook()
//{
//
//	InputAutor();
//}
//
//void book::InputAutor()
//{
//	cout << "Input autor" << endl;
//	char* temp = nullptr;
//	InputStr(temp);
//	autor = temp;
//	}

void book::show() const
{
	if (autor) {
	cout << "Author: " << autor << endl;
	}
	if (title) {
	cout << "Title: " << title << endl;
	}
	if (publishing_house) {
	cout << "Publishing House: " << publishing_house << endl;
	}
	cout << "Year: " << year << endl;
	cout << "Number of Pages: " << number_of_pages << endl;
}

const char* book::GetAutor() const
{
	if (autor) {
		return autor;
	}
	return nullptr;
}

const char* book::GetPublishingHouse() const
{
	if (publishing_house) {
		return publishing_house;
	}
	return nullptr;
}

const char* book::GetTitle() const
{
	if (title) {
		return title;
	}
return nullptr;
}

unsigned short book::GetYear() const
{
	return year;
}

unsigned short book::GetNumberOfPages() const
{
	return number_of_pages;
}

void book::SetYear(unsigned short yr)
{
	year = yr;
}
void book::SetNumberOfPages(unsigned short np)
{
	number_of_pages = np;
}

void book::SetAutor(const char* au)
{
	if (autor) {
		delete[]autor;
	}
	autor = new char[strlen(au) + 1];
	strcpy_s(autor, strlen(au) + 1, au);
}

void book::SetTitle(const char* ti)
{
	if (title) {
		delete[]title;
	}
	title = new char[strlen(ti) + 1];
	strcpy_s(title, strlen(ti) + 1, ti);
}
void book::SetPublishingHouse(const char* p_h)
{
	if (publishing_house) {
		delete[]publishing_house;
	}
	publishing_house = new char[strlen(p_h) + 1];
	strcpy_s(publishing_house, strlen(p_h) + 1, p_h);
}


void book::InputStr(char*& temp) const
{
	if (temp) {
		delete[] temp;
	}

	size_t tempsize = GetSize();
	char* sourse = new char[tempsize];

	cin.getline(sourse, tempsize);
	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	size_t size = strlen(sourse) + 1;
	temp = new char[size];
	strcpy_s(temp, size, sourse);

	delete[] sourse;
}

size_t book::GetSize() const
{
	size_t size = 0;
	cout << "Enter expected size (its can be bigger, but cant be smaller)" << endl;
	cin >> size;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return size;
}
//
book::~book()
{
	if (autor) {
		delete[]autor;
	}
	if (title) {
		delete[]title;
	}
	if (publishing_house) {
		delete[]publishing_house;
	}

}