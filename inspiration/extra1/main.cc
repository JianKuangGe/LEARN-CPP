// 突然想到指针是指向对象的首地址，而迭代器begin()也是，那有没有可能让他们一样的情况呢
#include <iostream>
#include <string>
using std::string;

int main()
{
    string str = "123456";
    string *pstr = &str;
    std::cout << "pstr: " << pstr << std::endl;
    auto svec = str.begin();
    std::cout << "svec: " << svec << std::endl;
}