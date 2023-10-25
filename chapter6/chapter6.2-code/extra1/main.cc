#include <iostream>
using std::cout;
using std::endl;

void fun(int &i)
{
    i = 5;
}

int main()
{
    int num = 0;
    int &i = num;
    fun(i);
    cout << num << endl;
}