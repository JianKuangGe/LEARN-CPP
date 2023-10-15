#include <iostream>

// 重写1.9
/* int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
} */

// 重写1.10
/* int main()
{
    int sum = 0;
    for (int i = 10; i >= 0; i--)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
} */

// 重写1.11
int main()
{
    int start = 0, end = 0;
    std::cout << "input start and end" << std::endl;
    std::cin >> start >> end;
    for (;start <= end; start++)
        std::cout << start << " ";
    std::cout << std::endl;
    return 0;
}