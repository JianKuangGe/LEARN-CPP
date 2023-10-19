#include <iostream>

int main()
{
    double i = 3.1415;
    const int &r1 = i;
    std::cout << "Before assignment: " << r1 << std::endl;
    i = 6.1223;
    std::cout << "After assignment: " << r1 << std::endl;
}