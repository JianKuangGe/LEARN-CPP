#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "hello world";
    cout << str << endl;
    for (auto &c:str) {
        c = 'X';
    }
    cout << str << endl;
}