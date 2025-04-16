#include "Worker.h"

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

const char* Worker::GetFullName() const
{
	return full_name;
}
 
const char* Worker::GetPosition() const
{
	return position;
}

void Worker::SetSalary(const double set_salary)
{
	salary = set_salary;
}

void Worker::SetYear(const int set_year)
{
	year_of_employment = set_year;
}

void Worker::SetFullName(const char* set_full_name)
{
	if (full_name) {
		delete[] full_name;
	}
	full_name = copy_str(set_full_name);
}

void Worker::SetPosition(const char* set_position)
{
	if (position) {
		delete[] position;
	}
	position = copy_str(set_position);
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
