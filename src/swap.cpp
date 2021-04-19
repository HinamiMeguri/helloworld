#include "swap.h"


void swap::run()
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap::printInfo()
{
    std::cout << a << b;
}