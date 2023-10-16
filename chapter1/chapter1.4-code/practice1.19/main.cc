// 可能是题目的编号写错了，打印两个数之间的数应该是1.11
#include <iostream>

int main()
{
    int start, end;
    std::cout << "input start number and end number" << std::endl;
    std::cin >> start >> end;
    if (start < end) {
        while (start <= end) {
            std::cout << start << " ";
            start++;
        }  
    } else {
        while (start >= end) {
            std::cout << start << " ";
            start--;
        }         
    }
    std::cout << std::endl;
    return 0;
}