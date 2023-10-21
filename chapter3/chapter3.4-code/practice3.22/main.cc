// 输出txt第一段的内容
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> text;
    string str = "";
    while (getline(cin, str)) {
        text.push_back(str);
    }
    cout << text.size() << endl;
    for (auto it = text.cbegin();
        it != text.cend() && !it->empty(); it++) {
            for (char c : *it) {
            char i = toupper(c);
            cout << i;
            } 
            cout << endl;   
        }

}