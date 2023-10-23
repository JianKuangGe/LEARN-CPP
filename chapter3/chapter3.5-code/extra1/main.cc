#include <iostream>

int ret_num()
{
    return 2;
}

int main()
{
    int ia[ret_num()];
    std::cout << ia[0] << std::endl;
}