#pragma once
/*
������� ������ ��������. �������:

������ ���� ��������� ������;
������ ����, ���������� �������� �������������;
������ ����, ���������� ����� ��������� ����.
����������� explicit ����������� � ����������� �������-����� (��������, ��� ����������� ������ � ����� � �.�.)
*/
#include <iostream>
#include "book class.h"
using namespace std;


class BookArray {
private:
	book** books = nullptr;
	size_t books_count = 0;
public:

	void AddThisBook(const char* au, const char* ti, const char* p_h, unsigned short yr, unsigned short np);
	void Output() const;

	void ShowBooksByAuthor(const char* author) const;
	void ShowBooksByPublishingHouse(const char* publishing_house) const;
	void ShowBooksAfterYear(unsigned short year) const;

	~BookArray();
};