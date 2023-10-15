#include <iostream>

int main()
{
    int num = 10, sum = 0;
    while (num >= 0) {
        sum += num;
        num--;
    }
    std::cout << sum << std::endl;
    return 0;
}