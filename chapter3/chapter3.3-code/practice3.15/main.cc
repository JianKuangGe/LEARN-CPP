#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> strv;
    string str;
    while (cin >> str) {
        strv.push_back(str);
    }
}