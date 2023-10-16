// 这个程序主要是用来探究这一张用的很对的，尤其是practice1.23和25用到的
// 针对std::cin的双重循环，来探究下这个循环是怎么工作的

#include <iostream>

int main()
{
    int currI, i;
    std::cin >> currI;
    while (std::cin >> i) {
        std::cout << "curri:" << currI << " i:" << i << std::endl;
        if (currI != i) {
            currI = i;
        }
    }
    std::cout << "------" << std::endl;
    return 0; 
}