#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int abs(int i)
{
    if(i >= 0) {
        return i;
    }
    else {
        return -i;
    }
}

int main()
{
    int i = 0;
    cin >> i;
    cout << abs(i) << endl;
}