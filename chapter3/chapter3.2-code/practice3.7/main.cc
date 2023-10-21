// 个人猜测，好像没什么不同啊
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
    for (char &c:str) {
        c = 'X';
    }
    cout << str << endl;
}