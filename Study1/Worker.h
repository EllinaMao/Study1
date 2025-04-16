#pragma once
#ifndef TASK2
#define TASK2

#include <iostream>
using namespace std;
char* copy_str(const char* str);

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
	char* GetFullName()const;
	char* GetPosition()const;

	void Output()const;
	~Worker();
};
#endif // !TASK2