
#pragma once
#include <iostream>
using namespace std;

class B1
{
protected:
    int b1;

public:
    B1(int b1);
    virtual ~B1();

    virtual void show() const;
};


