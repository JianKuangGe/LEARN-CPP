#include <iostream>
// 猜测sum终值为0，从-100加到100

 int main()
 {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
 }