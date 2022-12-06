#include "logic.h"
#include <iostream>

void test1()
{
    auto res = my_add(1,2);
    if (res != 2)
    {
        std::cerr << "error 1+1 != 2" << std::endl;
    }
    
}

int main(int argc, char** argv)
{
    test1();
    return 0;
}