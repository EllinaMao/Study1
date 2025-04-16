/*
������� 2
�������� ����� Worker.
	+���������� ������� ������ : ���, ���������, ��� ����������� �� ������, ��������.
	+������� ������ ��������.������� :
	+������ ����������, ���� ������ ������� �� ������ ����������� ����������� �������� ����� ���;
	+������ ����������, �������� ������� ����������� ��������;
	+������ ����������, ���������� �������� ���������.
	+����������� explicit ����������� � ����������� ������� - �����(��������, ��� ����������� ������ � ��������� � �.�.)
*/

#include <iostream>
//def task1
#include "book class.h"
#include "book array.h"

//def task2
#include "Worker.h"
#include "WorkersList.h"

using namespace std;

int main()
{
#ifdef TASK1








#endif // TASK1
#ifdef TASK2
	WorkersList Step;

	Step.AddThisWorker(5000.21, 1999, "Natasa Darova", "Director");
	Step.AddThisWorker(3000.11, 1999, "Sara Darova", "Manager");
	Step.AddThisWorker(140.1, 2012, "Anton Gavrilov", "Worker");
	Step.AddThisWorker(140.1, 2019, "Serafina Ligova", "Worker");
	Step.AddThisWorker(140.1, 2017, "Daria Machina", "Worker");
	Step.AddThisWorker(140.1, 2014, "Shizoid Parfentivich", "Worker");
	Step.AddThisWorker(140.7, 2025, "Glucka Andreevna", "Worker");

	Step.Output();

	Step.OutputWorkersWorkedAbove(12);
	Step.OutputWorkersWithSalaryAbove(3000);
	Step.OutputWorkersByPosition("Worker");
#endif // TASK2

	return 0;
}
