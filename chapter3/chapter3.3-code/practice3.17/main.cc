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
    string str = "";
    // 存放输入至vector
    while (cin >> str) {
        strv.push_back(str);
    }
    // 该为大写字母
    for (auto &word : strv) {
        for (char &c : word) {
            c = toupper(c);
        }
    }
    // 遍历输出
    for (auto word : strv) {
        cout << word << endl;
    }
}