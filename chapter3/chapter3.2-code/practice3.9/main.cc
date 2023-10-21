// 是不合法的，因为s为空，其并没有s[0]
#include <iostream>

int main()
{
    std::string s;
    std::cout << s[0] << std::endl;
}

// 但是从执行结果来看好像没什么问题？但感觉肯定是不对的