#include <iostream>
#include "Sales_item.h"

int main()
{
   Sales_item item1, item2;
   std::cin >> item1 >> item2;
   std::cout << item1 + item2 << std::endl;
   return 0; 
}

// ❯ cat items.txt | ./practice1.21
// 000-001 5 110 22