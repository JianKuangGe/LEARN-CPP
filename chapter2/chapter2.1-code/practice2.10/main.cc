// global_str为空串，global_int为0
// local_int、local_str无法进行访问操作
// 实际情况却是local_int的值是随机的,local_str貌似一直是空串

#include <iostream>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;
    std::cout << global_int << global_str << std::endl;
    std::cout << local_str << std::endl;
    return 0;
}