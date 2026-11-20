#include "D3.h"

// Конструктор ініціалізації
D3::D3(int b1, int d1, int b2, int d2, int d3)
    : D1(b1, d1), D2(b2, d2)
{
    this->d3 = d3;
}

// Деструктор
D3::~D3()
{
}

// Виведення інформації
void D3::show() const
{
    cout << "Class D3" << endl;

    cout << "b1 = " << b1 << endl;
    cout << "d1 = " << d1 << endl;

    cout << "Information from D2:" << endl;
    D2::show();

    cout << "d3 = " << d3 << endl;
}
