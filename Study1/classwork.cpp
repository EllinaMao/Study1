/*
Задание 1
Создайте класс Book.
	Необходимо хранить данные: Автор, Название, Издательство, Год, Количество, страниц.
	Создать массив объектов   (створюємо клас МасивКнижок) . Вывести:
	список книг заданного автора;
	список книг, выпущенных заданным издательством;
	список книг, выпущенных после заданного года.
Используйте explicit конструктор и константные функции-члены (например, для отображения данных о книге и т.д.)

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

	BookArray Library;

	Library.AddThisBook("Oleksandra", "Programming Basics", "Step", 2012, 335);
	Library.AddThisBook("Sara", "Programming Basics", "ProgrammesAssociation", 2000, 760);
	Library.AddThisBook("Darina", "Programming Basics", "GeekBrains", 2010, 300);
	Library.AddThisBook("Marina", "Programming Basics", "ShoesBox", 2025, 10);
	Library.AddThisBook("Oleksandra", "Programming Python", "Step", 2018, 360);
	Library.AddThisBook("Natasha", "Programming Basics", "SilverArray", 2019, 200);
	Library.AddThisBook("Oleksandra", "Programming C++", "Step", 203, 150);

	Library.Output();

	Library.ShowBooksByAuthor("Oleksandra");
	Library.ShowBooksByPublishingHouse("Step");
	Library.ShowBooksAfterYear(2019);

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
