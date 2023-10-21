// 使用索引遍历字符串，将字符串的字母全部改为大写
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "";
    while (cin >> str) {
        for (decltype(str.size()) index = 0;
            index < str.size(); index++) {
                str[index] = toupper(str[index]);
            }
        cout << str << " ";
    }
    cout << endl;
}