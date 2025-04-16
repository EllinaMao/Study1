#include "Worker.h"

char* copy_str(const char* str)
{
	if (str == nullptr) {
		return nullptr;
	}
	size_t size = strlen(str) + 1;
	char* copy = new char[size];

	strcpy_s(copy, size, str);

	return copy;
}

Worker::Worker(double sal, int year, const char* fn, const char* pos)
	: salary(sal), year_of_employment(year), full_name(copy_str(fn)), position(copy_str(pos)) {}

Worker::Worker(const Worker& w)
{
	salary = w.salary;
	year_of_employment = w.year_of_employment;
	full_name = copy_str(w.full_name);
	position = copy_str(w.position);
}
	

double Worker::GetSalary() const
{
	return salary;
}

int Worker::GetYear() const
{
	return year_of_employment;
}

char* Worker::GetFullName() const
{
	return full_name;
}

char* Worker::GetPosition() const
{
	return position;
}


void Worker::Output() const
{
	cout << "Name: " << full_name
		<< ", Position: " << position
		<< ", Salary: " << salary<<"$ in month"
		<< ", Year of Employment: " << year_of_employment
		<< endl;
}


Worker::~Worker()
{
	if (full_name) {
		delete[] full_name;
	}
	if (position) {
		delete[] position;
	}
}
