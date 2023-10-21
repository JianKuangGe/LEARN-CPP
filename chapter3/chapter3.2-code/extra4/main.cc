// 获取用户输入的字符串，输出字符串中符号的数量
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
    // 最好还是变量在定义时做好初始化
    unsigned int sum = 0;
    cin >> str;
    for (auto c : str) {
        if (ispunct(c)) {
            sum++;
        }
    }
    cout << sum << " punct" << endl;
}