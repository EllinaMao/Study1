#pragma once
#include "Worker.h"
#include "timefunctions.h"
/*
	������� ������ ��������.������� :
	������ ����������, ���� ������ ������� �� ������ ����������� ����������� �������� ����� ���;
	������ ����������, �������� ������� ����������� ��������;
	������ ����������, ���������� �������� ���������.
	����������� explicit ����������� � ����������� ������� - �����(��������, ��� ����������� ������ � ��������� � �.�.)
*/
class WorkersList {
private:

	Worker** workers = nullptr;
	size_t worker_count = 0;

public:

	void AddThisWorker(double salary, int year, const char* full_name, const char* position);
	void Output() const;

	void OutputWorkersWorkedAbove(const int year) const;
	void OutputWorkersWithSalaryAbove(const double salary) const;
	void OutputWorkersByPosition(const char* position) const;

	~WorkersList();
};

