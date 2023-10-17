// a应该是合法的，会把d重新赋值。b不确定，不太清楚引用是否能被重新赋值
// c感觉不合法，因为这是把一个引用赋值给了int类型。d感觉合法，把r1重新指向d。
// ----
// b引用是可以被重新赋值的，例如这里的r2 = r1,相当于是r2也指向了i
// c是合法的，相当于是把d的值赋给了i,同理d也是把d的值赋给了i

#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 1.2, &r2 = d;
//    r2 = 3.14159;
//    r2 = r1;
//    i = r2;
    r1 = d;
    std::cout << "i: " << i << std::endl;
    std::cout << "&r1: " << &i << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "&r2: " << &d << std::endl;
}