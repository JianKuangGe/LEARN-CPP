#include <iostream>
using std::cout;
using std::endl;

void exchange(int *p1, int *p2)
{
    int m = *p1;
    int n = *p2;
    *p1 = n;
    *p2 = m;
}

int main()
{
    int m = 3, n = 5;
    cout << m << " " << n << endl;
    int *p1 = &m, *p2 = &n;
    exchange(p1, p2);
    cout << m << " " << n << endl;
}