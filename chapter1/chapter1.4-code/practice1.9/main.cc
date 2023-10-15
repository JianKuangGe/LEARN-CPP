#include <iostream>

int main()
{
    int sum = 0, start = 50, end = 100;
    while (start <= end) {
        sum += start;
        start ++;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0; 
}