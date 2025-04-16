#pragma once
#include "Worker.h"
/*
	Создать массив объектов.Вывести :
	список работников, стаж работы которых на данном предприятии превосходит заданное число лет;
	список работников, зарплата которых превосходит заданную;
	список работников, занимающих заданную должность.
	Используйте explicit конструктор и константные функции - члены(например, для отображения данных о работнике и т.д.)
*/
class WorkersList {
private:
	size_t worker_count = 0;
	Worker** workers = nullptr;

public:

	void AddThisWorker(double salary, int year, const char* full_name, const char* position);
	void Output() const;

	void OutputWorkersWorkedAbove(const int year) const;
	void OutputWorkersWithSalaryAbove(const double salary) const;
	void OutputWorkersByPosition(const char* position) const;

	~WorkersList();
};

int ThisYear();