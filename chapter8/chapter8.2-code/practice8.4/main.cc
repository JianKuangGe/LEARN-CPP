#include <iostream>
#include <vector>
#include <fstream>
using std::cout;
using std::vector;
using std::ifstream;
using std::string;
using std::endl;

int main()
{
    // 在这里定义strvec其实是个不好的习惯，之前有讲
    // 在第一次使用该变量的附近去定义变量
    vector<string> strvec;
    ifstream in("text.txt");
    if (in) {
        string str;
        while (!in.eof()) {
            getline(in, str);
            strvec.push_back(str);
        }
        // 当使用完流之后记得关闭
        in.close();
    } else {
        return -1;
    }

    // 输出strvec的内容
    auto beg = strvec.begin();
    auto end = strvec.end();
    while (beg != end) {
        cout << *beg << endl;
        beg++;
    }
}