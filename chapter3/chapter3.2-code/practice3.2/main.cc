#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1, str2;
    // 读取一整行
    getline(cin, str1);
    // 读取一个词
    cin >> str2;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
}