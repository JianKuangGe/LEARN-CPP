// 题目中的代码是错误的，编译时会报error: expected expression
// 需要在第二、三行前面应加上std::cout

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
/* error code
    std::cout << "The sum of " << n1;
              << " and " << n2;
              << " is " << n1 + n2 << std::endl;
*/
// right code
    std::cout << "The sum of " << n1;
    std::cout << " and " << n2;
    std::cout << " is " << n1 + n2 << std::endl;
    return 0;
}