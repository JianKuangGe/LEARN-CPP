// 验证一下被调函数能否返回字面量

#include <iostream>
using std::cout;
using std::endl;
using std::string;

string &ret_str()
{
	return "111";
}

int main()
{
	string str = ret_str();
	cout << str << endl;
}