#include <iostream>
#include "extern.h"

int main()
{
    extern int i;
    std::cout << i << std::endl;
    return 0;
}