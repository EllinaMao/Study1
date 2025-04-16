#include "book class.h"

book::book()
{
	year = 0;
	number_of_pages = 0;
	autor = new char [8] {"Unknown"};
	title = new char [8] {"Unknown"};
	publishing_house = new char [8] {"Unknown"};

}

book::book(const char* au, const char* ti, const char* p_h, unsigned short yr, unsigned short np)
	: year(yr), number_of_pages(np), autor(copy_str(au)), title(copy_str(ti)), publishing_house(copy_str(p_h)) {
}

book::book(const book& b)
{
	year = b.year;
	number_of_pages = b.number_of_pages;

	autor = copy_str(b.autor);
	title = copy_str(b.title);
	publishing_house = copy_str(b.publishing_house);
}


void book::Output() const

{	cout << "Author: " << autor<<", "
	<< "book title: " << title << ", "
	<< "publishing House: " << publishing_house << ", "
	<< "year: " << year << ", "
	<< "number of Pages: " << number_of_pages << endl;
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
	autor = (copy_str(au));
}

void book::SetTitle(const char* ti)
{
	if (title) {
		delete[]title;
	}
	title = (copy_str(ti));
}
void book::SetPublishingHouse(const char* p_h)
{
	if (publishing_house) {
		delete[]publishing_house;
	}
	(copy_str(p_h));
}


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