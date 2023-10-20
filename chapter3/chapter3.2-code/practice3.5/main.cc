#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, sumstr1, sumstr2;
    while (getline(cin, str)) {
        sumstr1 += str;
        sumstr2 = sumstr2 + str + " ";
    }
    cout << "str1: " << sumstr1 << endl;
    cout << "str2: " << sumstr2 << endl;
}