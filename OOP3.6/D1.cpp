#include "D1.h"

// Конструктор ініціалізації
D1::D1(int b1, int d1) : B1(b1)
{
    this->d1 = d1;
}

// Деструктор
D1::~D1()
{
}

// Виведення інформації
void D1::show() const
{
    cout << "Class D1" << endl;
    cout << "b1 = " << b1 << endl;
    cout << "d1 = " << d1 << endl;
}
