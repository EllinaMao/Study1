#include "book array.h"

BookArray::BookArray(size_t s)
{
	if (s > 0) {
		count = s;
		books = new book[count];
	}
	else {
		count = 0;
		books = nullptr;
	}
}

BookArray::BookArray(const book& b)
{

}

BookArray::~BookArray()  
{  
   delete[] books;  
   books = nullptr;  
   count = 0;  
}

void BookArray::ShowBooks() const {
	for (size_t i = 0; i < count; ++i) {
		cout << "Book " << i + 1 << ":" << endl;
		books[i].show();
		cout << endl;
	}
}
void BookArray::ShowBooksAfterYear(unsigned short year) const {
	for (size_t i = 0; i < count; ++i) {
		if (books[i].GetYear() > year) {
			cout << "Book published after " << year << ":" << endl;
			books[i].show();
			cout << endl;
		}
	}
}

void BookArray::AddBook(const book& b)
{
	if (count > 0) {
		books[count - 1] = b;
		count++;
	}

	else {
		book* newBooks = new book[count + 1];
		books = new book[1];
		books[0] = b;
		count = 1;
	}
}

//void BookArray::AddBook(const book& b) {
//
//	book* newBooks = new book[count + 1];
//	for (size_t i = 0; i < count; ++i) {
//		newBooks[i] = books[i];
//	}
//	newBooks[count] = b;
//	delete[] books;
//	books = newBooks;
//	count++;
//}

void BookArray::ShowBooksByAuthor(const char* author) const {
	for (size_t i = 0; i < count; ++i) {
		if (strcmp(books[i].GetAutor(), author) == 0) {
			cout << "Book by " << author << ":" << endl;
			books[i].show();
			cout << endl;
		}
	}
}
void BookArray::ShowBooksByPublishingHouse(const char* publishing_house) const {
	for (size_t i = 0; i < count; ++i) {
		if (strcmp(books[i].GetPublishingHouse(), publishing_house) == 0) {
			cout << "Book from " << publishing_house << ":" << endl;
			books[i].show();
			cout << endl;
		}
	}
}
