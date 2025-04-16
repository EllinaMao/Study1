#pragma once
#ifndef TASK1
#define TASK1

#include <iostream>
#include "strmetods.h"
using namespace std;

/*
Задание 1
Создайте класс Book.

Необходимо хранить данные: Автор, Название, Издательство, Год, Количество, страниц.

*/

class book {
private:
    unsigned short year;
    unsigned short number_of_pages;

    char* autor;
    char* title; // book name
    char* publishing_house;

public:

    book();
    book(const char* au, const char* ti, const char* p_h, unsigned short yr, unsigned short np); 
    book(const book& b);

    void Output() const;
    const char* GetAutor() const;
    const char* GetPublishingHouse() const;
    const char* GetTitle() const;
    unsigned short GetYear() const;
    unsigned short GetNumberOfPages() const;




    void SetAutor(const char* au);
    void SetTitle(const char* ti);
    void SetPublishingHouse(const char* p_h);
    void SetYear(unsigned short yr);
    void SetNumberOfPages(unsigned short np);

    ~book();
};

#endif // !TASK1