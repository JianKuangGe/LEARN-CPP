// 首先来说一下这个程序做了什么：
// 读取一些输入，最终输出每个isbn号对应记录的和
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item totalItem, item;
    while (std::cin >> totalItem) {
        while (std::cin >> item) {
            if (totalItem.isbn() == item.isbn()) {
                totalItem += item;
            }
            else {
                std::cout << totalItem << std::endl;
                totalItem = item;
            }
        }
        std::cout << totalItem << std::endl;
        totalItem = item;        
    }
    return 0;
}