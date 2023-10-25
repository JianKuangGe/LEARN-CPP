#include <iostream>
#include "Chapter6.h"
using std::cout;
using std::endl;


int main()
{
    int i = 5;
    cout << fact(i) << endl;
    cout << abs(i) << endl;
}




int fact(int num)
{
    int sum = 1;
    while(num > 0) {
        sum *= num;
        num--;
    }
    return sum;
}

int abs(int i)
{
    if(i >= 0) {
        return i;
    }
    else {
        return -i;
    }
}