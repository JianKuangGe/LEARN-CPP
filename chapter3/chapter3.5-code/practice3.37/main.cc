// 定义了一个长度为5的数组ca,定义了一个指向数组首元素的指针cp，cp++，输出数组中的元素
// 但是感觉这样不就越界访问了吗。。
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
}