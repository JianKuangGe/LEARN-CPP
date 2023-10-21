#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec = {1, 2, 3};
    auto it1 = ivec.cend();
    *--it1 = 4;

    cout <<  ivec[2] << endl;
}