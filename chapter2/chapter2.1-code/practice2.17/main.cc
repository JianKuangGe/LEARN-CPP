// 感觉是会输出 10 10 ，因为i和ri其实是一个东西
#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
}