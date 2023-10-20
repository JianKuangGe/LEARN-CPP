// 持续获取用户输入后输出
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string str;
    while (cin >> str) {
        cout << str << " ";
    }
}