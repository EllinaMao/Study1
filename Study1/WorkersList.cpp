#include "WorkersList.h"


void WorkersList::AddThisWorker(double salary, int year, const char* full_name, const char* position)
{
    Worker* new_worker = new Worker(salary, year, full_name, position);

    size_t new_count = worker_count + 1;

    Worker** temp = new Worker*[new_count];

    for (size_t i = 0; i < worker_count; i++) {
        temp[i] = workers[i];
    }

    temp[new_count - 1] = new_worker;
    worker_count++;
    delete[] workers;
    workers = temp;
    temp = nullptr;
    new_worker = nullptr;
}

void WorkersList::Output() const
{
    cout << "Workers list" << endl;
    if (!workers || worker_count == 0) {
        return;
    }

    for (size_t i = 0; i < worker_count; i++) {
        if (workers[i]) {
            workers[i]->Output();
        }
    }
    cout << endl;
}

void WorkersList::OutputWorkersWorkedAbove(const int year) const
{
    int this_year = ThisYear();
    cout << "---------------------------------------------" << endl;
    cout << "Workers worked more them " << year << "years:" << endl;
    for (size_t i = 0; i < worker_count; i++) {
        if (this_year - workers[i]->GetYear() >= year) {
            workers[i]->Output();
        }
    }
    cout << endl;
}

void WorkersList::OutputWorkersWithSalaryAbove(const double compare_salary) const
{
    cout << "---------------------------------------------" << endl;
    cout << "Workers with salary above " << compare_salary << ":" << endl;
    for (size_t i = 0; i < worker_count; i++) {
        if (workers[i]->GetSalary() >= compare_salary) {
            workers[i]->Output();
        }
    }
    cout << endl;
}
void WorkersList::OutputWorkersByPosition(const char* position) const
{
    cout << "---------------------------------------------" << endl;
    cout << "Workers with position: "<< position << ":" << endl;
    for (size_t i = 0; i < worker_count; i++) {
        if (strcmp(workers[i]->GetPosition(), position) == 0) {
            workers[i]->Output();
        }
    }
    cout << endl;
}

WorkersList::~WorkersList()
{
    for (size_t i = 0; i < worker_count; i++) {
        delete workers[i];
    }

    delete[] workers;
    workers = nullptr;
    worker_count = 0;
}
