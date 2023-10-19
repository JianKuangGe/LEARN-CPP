#include <iostream>

int main()
{
    int null = 0, *p = &null;
    std::cout << null << "\t" << p << "\t" << *p << std::endl;
}