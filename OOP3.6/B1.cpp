
#include "B1.h"

// Конструктор ініціалізації
B1::B1(int b1)
{
    this->b1 = b1;
}

// Деструктор
B1::~B1()
{
}

// Виведення інформації
void B1::show() const
{
    cout << "Class B1" << endl;
    cout << "b1 = " << b1 << endl;
}

