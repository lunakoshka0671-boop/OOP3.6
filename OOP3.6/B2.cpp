#include "B2.h"

// Конструктор ініціалізації
B2::B2(int b2)
{
    this->b2 = b2;
}

// Деструктор
B2::~B2()
{
}

// Виведення інформації
void B2::show() const
{
    cout << "Class B2" << endl;
    cout << "b2 = " << b2 << endl;
}
