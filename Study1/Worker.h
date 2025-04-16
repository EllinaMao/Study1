#pragma once
#ifndef TASK2
#define TASK2

#include <iostream>
#include "strmetods.h"
using namespace std;

/*
Задание 2

Создайте класс Worker.
	Необходимо хранить данные : ФИО, Должность, Год поступления на работу, Зарплата.
*/

class Worker {
private:

	double salary;
	int year_of_employment;
	char* full_name;
	char* position;

public:

	Worker() 
		:salary(0), year_of_employment(0), full_name(new char[8] {"Unknown"}), position(new char[8] {"Unknown"}) {
	};

	explicit Worker(double sal, int year, const char* fn, const char* pos);
	Worker(const Worker&w);

	double GetSalary()const;
	int GetYear()const;
	const char* GetFullName()const;
	const char* GetPosition()const;

	void SetSalary(const double set_salary);
	void SetYear(const int set_year);
	void SetFullName(const char* set_full_name);
	void SetPosition(const char* set_position);


	void Output()const;
	~Worker();
};
#endif // !TASK2