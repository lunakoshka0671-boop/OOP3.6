#include "D2.h"

// Конструктор ініціалізації
D2::D2(int b2, int d2) : B2(b2)
{
    this->d2 = d2;
}

// Деструктор
D2::~D2()
{
}

// Виведення інформації
void D2::show() const
{
    cout << "Class D2" << endl;
    cout << "b2 = " << b2 << endl;
    cout << "d2 = " << d2 << endl;
}
