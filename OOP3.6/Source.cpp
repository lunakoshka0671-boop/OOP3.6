
#include <iostream>
#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"

using namespace std;

int main()
{
    // ќб'Їкт класу B1
    cout << "========== B1 ==========" << endl;

    B1 obj1(10);

    cout << "Object size: " << sizeof(obj1) << " bytes" << endl;
    obj1.show();


    // ќб'Їкт класу B2
    cout << "\n========== B2 ==========" << endl;

    B2 obj2(20);

    cout << "Object size: " << sizeof(obj2) << " bytes" << endl;
    obj2.show();


    // ќб'Їкт класу D1
    cout << "\n========== D1 ==========" << endl;

    D1 obj3(10, 30);

    cout << "Object size: " << sizeof(obj3) << " bytes" << endl;
    obj3.show();


    // ќб'Їкт класу D2
    cout << "\n========== D2 ==========" << endl;

    D2 obj4(20, 40);

    cout << "Object size: " << sizeof(obj4) << " bytes" << endl;
    obj4.show();


    // ќб'Їкт класу D3
    cout << "\n========== D3 ==========" << endl;

    D3 obj5(10, 30, 20, 40, 50);

    cout << "Object size: " << sizeof(obj5) << " bytes" << endl;
    obj5.show();


    return 0;
}
