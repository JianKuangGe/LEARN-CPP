#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int ia[3] = {1, 2, 3};
    vector<int> ivec(begin(ia), end(ia));
    for (auto i : ivec) {
        cout << i << endl;
    }
}