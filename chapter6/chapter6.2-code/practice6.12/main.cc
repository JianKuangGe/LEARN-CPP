#include <iostream>
using std::cout;
using std::endl;

void exchange(int &m, int &n)
{
    int i = n;
    n = m;
    m = i;
}

int main()
{
    int m = 3, n = 5;
    cout << m << " " << n << endl;
    exchange(m, n);
    cout << m << " " << n << endl;
}

// 引用好用些，不用解引用