#pragma once
#include <iostream>

class swap
{
private:
    /* data */
    int a;
    int b;

public:
    swap(int _a, int _b)
    {
        this->a = _a;
        this->b = _b;
    }

    void run();
    void printInfo();
};
