// 测试下string类型的vector，初始化时能不能放进int
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v1{10, "h1"};
    cout << v1[0] <<endl;
}