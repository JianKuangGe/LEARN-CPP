#include <iostream>
using std::cout;
using std::endl;

int fact(int num)
{
    int sum = 1;
    while(num > 0) {
        sum *= num;
        num--;
    }
    return sum;
}

int main()
{
    cout << fact(5) << endl;
}