// 思考
// a由原本的0被赋值为42
// b由原本的0被赋值为42
// c由原本的0被赋值为42
// d原本是一个指针，被赋值42，非法
// e原本是一个指向int常量的指针，被赋值42，非法
// g原本是一个指向int对象的引用，不能被重新赋值为字面量，因为其不是一个常量引用

#include <iostream>
int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto &j = 42;
    a = 42;
    b = 42;
    c = 42;
    d = 42;
    e = 42;
    j = 42;
}