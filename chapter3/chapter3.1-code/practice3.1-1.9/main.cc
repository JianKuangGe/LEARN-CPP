// 重做practice1.9
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 50, sum = 0;
    while(i <= 100) {
        sum += i;
        i++;
    }
    cout << sum << endl;
}