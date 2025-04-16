#include "book array.h"

void BookArray::AddThisBook(const char* au, const char* ti, const char* p_h, unsigned short yr, unsigned short np)
{
    book* new_book = new book(au, ti, p_h, yr, np);
    size_t new_count = books_count + 1;
    book** temp = new book * [new_count];
    for (int i = 0; i < books_count; i++) {
        temp[i] = books[i];
    }
    temp[new_count - 1] = new_book;
    books_count++;

    if (books) {
    delete[] books;
    }
    books = temp;
    temp = nullptr;
    new_book = nullptr;
}

void BookArray::Output() const
{
    cout << "Books list" << endl;
    if (!books || books_count == 0) {
        return;
    }

    for (size_t i = 0; i < books_count; i++) {
        if (books[i]) {
            books[i]->Output();
        }
    }
    cout << endl;
}

void BookArray::ShowBooksByAuthor(const char* author) const {
    cout << "---------------------------------------------" << endl;
    cout << "Book by " << author << ":" << endl;

	for (size_t i = 0; i < books_count; ++i) {
		if (strcmp(books[i]->GetAutor(), author) == 0) {
			books[i]->Output();
		}
	}
    cout << endl;
}
void BookArray::ShowBooksByPublishingHouse(const char* publishing_house) const {
    cout << "---------------------------------------------" << endl;
	cout << "Book from " << publishing_house << ":" << endl;

	for (size_t i = 0; i < books_count; ++i) {
		if (strcmp(books[i]->GetPublishingHouse(), publishing_house) == 0) {
			books[i]->Output();
		}
	}
	cout << endl;
}

void BookArray::ShowBooksAfterYear(unsigned short year) const
{
    cout << "---------------------------------------------" << endl;
    cout << "Book after " << year << " year:" << endl;

    for (size_t i = 0; i < books_count; ++i) {
        if (books[i]->GetYear()>= year) {
            books[i]->Output();
        }
    }
    cout << endl;
}


BookArray::~BookArray()
{
    if (!books || books_count) {
        return;
    }
    for (size_t i = 0; i < books_count; i++) {
        delete books[i];
    }

    delete[] books;
    books = nullptr;
    books_count = 0;
}
