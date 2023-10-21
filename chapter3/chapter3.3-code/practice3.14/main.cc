#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> intv;
    int i;
    while (cin >> i) {
        intv.push_back(i);
    }
}