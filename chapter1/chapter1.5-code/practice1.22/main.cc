#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sumItem;
    while (std::cin >> item) {
        sumItem += item;
    }
    std::cout << sumItem << std::endl;
    return 0;
}