// 确认列表初始化存在丢失信息风险时的编译器报错

#include <iostream>

int main()
{
    long double m = 3.1415926536;
    int n{m}, i = {m};
//    std::cout << n << i <<std::endl;
    return 0;
}