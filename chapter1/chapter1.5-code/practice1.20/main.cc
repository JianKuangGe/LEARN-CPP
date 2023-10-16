#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    while (std::cin >> item) {
        std::cout << item << std::endl;
    }
    return 0;
}

// ❯ cat items.txt | ./practice1.20
// 000-001 3  20
// 000-002 5  30
// 000-001 2  25