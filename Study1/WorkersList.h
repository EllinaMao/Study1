#pragma once
#include "Worker.h"
/*
	������� ������ ��������.������� :
	������ ����������, ���� ������ ������� �� ������ ����������� ����������� �������� ����� ���;
	������ ����������, �������� ������� ����������� ��������;
	������ ����������, ���������� �������� ���������.
	����������� explicit ����������� � ����������� ������� - �����(��������, ��� ����������� ������ � ��������� � �.�.)
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