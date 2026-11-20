#pragma once
#include <iostream>
using namespace std;

class B2
{
protected:
    int b2;

public:
    B2(int b2);
    virtual ~B2();

    virtual void show() const;
};

