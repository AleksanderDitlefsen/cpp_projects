
#include <iostream>
#include "io.h"


int main()
{
    std::cout << "Let us add two numbers together!" << '\n';
    std::cout << "Give me a number please: ";

    int a{readNumber()};

    std::cout << "Great! Now another: ";

    int b{readNumber()};

    std::cout << "Perfect, now here are the numbers summed up: ";
    writeAnswer(a + b);
    std::cout << '\n';

    return 0;

}
