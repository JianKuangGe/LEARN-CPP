#include <iostream>

int main()
{
    int sum = 0, num = 0;
    std::cout << "input number" << std::endl;
    while (std::cin >> num) {
        sum += num;
    }
    std::cout << "the sum is " << sum << std::endl;
    return 0;
}