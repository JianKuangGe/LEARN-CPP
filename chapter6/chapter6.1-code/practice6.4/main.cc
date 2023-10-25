#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact(int i)
{
    int sum = 1;
    while(i > 0) {
        sum *= i;
        i--;
    }
    return sum;
}

int main()
{
    int i = 0;
    cin >> i;
    cout << fact(i) << endl;
}