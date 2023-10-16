// 

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, item;
    while (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> item) {
            if (currItem.isbn() == item.isbn()) {
                cnt++;
            }    
            else {
                std::cout << "The book " << currItem.isbn() << " cout is "
                          << cnt << std::endl;
                currItem = item; 
                cnt = 1;               
            }
        }
        std::cout << "The book " << currItem.isbn() << " cout is "
                  << cnt << std::endl;
        currItem = item; 
    }  
    return 0;
}