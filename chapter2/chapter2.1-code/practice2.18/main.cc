#include <iostream>

int main()
{
    int m = 5, n = 10;
    int *pi = &m;
    std::cout << pi << " " << *pi << std::endl;
    pi = &n;
    std::cout << pi << " " << *pi << std::endl;
    *pi = 5;
    std::cout << n << std::endl;
}