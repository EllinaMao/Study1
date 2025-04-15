#pragma once
/*
Задание 1
Создайте класс Book.

Необходимо хранить данные: Автор, Название, Издательство, Год, Количество, страниц.

*/

#include <iostream>
using namespace std;

class book {
private:
    unsigned short year;
    unsigned short number_of_pages;

    char* autor = nullptr;
    char* title = nullptr; // book name
    char* publishing_house = nullptr;
    void InputStr(char*& temp) const;
    size_t GetSize() const;


public:

    book();
    ~book();

    book(const char* au, const char* ti, const char* p_h, unsigned short yr, unsigned short np); 

    void InputBook();
    void InputAutor();
    //void InputTitle();
    //void InputPublicHouse();
    //void InputYear();
    //void InputNumberPages();

    void SetAutor(const char* au);
    void SetTitle(const char* ti);
    void SetPublishingHouse(const char* p_h);
    void SetYear(unsigned short yr);
    void SetNumberOfPages(unsigned short np);

    void show() const;
    const char* GetAutor() const;
    const char* GetPublishingHouse() const;
    const char* GetTitle() const;

    unsigned short GetYear() const;
    unsigned short GetNumberOfPages() const;
};