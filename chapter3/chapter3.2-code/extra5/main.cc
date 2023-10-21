// 获取用户输入的字符串，遍历全部改为大写
#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "";
    cin >> str;
    for (auto &c : str) {
        c = toupper(c);
    }
    cout << str << endl;
}