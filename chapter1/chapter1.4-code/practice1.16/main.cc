#include <iostream>

int main()
{
    int num = 0, sum =0;
    std::cout << "input some numbers" << std::endl;
    while(std::cin >> num) {
        sum += num;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}