#include <iostream>

using std::cout;
using std::endl;
using std::end;

int main()
{
    int ia[10];
    for (int *ptr = ia; ptr != end(ia); ptr++) {
        *ptr = 0;
    }
    for (auto i : ia) {
        cout << *ia << " ";
    }
    cout << endl;
}