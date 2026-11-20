#pragma once
#include "B1.h"

class D1 : public B1
{
protected:
    int d1;

public:
    D1(int b1, int d1);
    ~D1() override;

    void show() const override;
};

