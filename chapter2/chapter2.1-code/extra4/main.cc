// 来测试下常量指针，能否在定义的时候不进行初始化
// 实验结果：
// 1. 引用在定义时必须进行初始化
// 2. 常量指针在定义时必须进行初始化
// 3. 常量指针不能被再次复制

#include <iostream>

int main()
{
    int i = 5;
    int &r1 = i;
    r1 = i;
    std::cout << "r1: " << r1 << std::endl;
    int *const p1 = &i;
//    p1 = &i;
    std::cout << "p1: " << *p1 << std::endl;
}
