#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1 = "hello world1";
    string str2 = "hello world2";
    decltype(str1.size()) index1 = 0;
    // while循环
    cout << str1 << endl;
    while (index1 != str1.size()) {
        str1[index1] = 'X';
        index1++;
    }
    cout << str1 << endl;
    // 传统for循环
    cout << str2 << endl;
    for (decltype(str2.size()) index2 = 0;
        index2 != str2.size(); index2++) {
            str2[index2] = 'X';
        }
    cout << str2 << endl;
}

// 认为新标准中的for遍历更好，因为不用单独定义索引了，很方便
// while和for呢，个人认为for更好，因为for的循环子是在for中定义的
// 其作用域也只在for循环中，而while的循环子的作用域是整个main函数