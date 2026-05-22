#include <iostream>
#include "io.h"


int readNumber()
{
    int a{};

    std::cin >> a;

    return a;
}


void writeAnswer(int value)
{
    std::cout << value;
}
