// 感觉好像不合法？c肯定是一个引用，但是auto会忽略顶层const
// 所以c是个char类型的引用，但是应该不能指向const对象
// 但是编译成功了。。。。
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string str = "keep out";
    for (auto &c : str) {
        cout << c << endl;
    }
}