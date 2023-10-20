#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, sum_str = "";
    while (getline(cin, str)) {
        if (!str.empty()) {
            sum_str += str;
        }
    }
    cout << sum_str << endl;
    cout << sum_str.size() << endl;
}