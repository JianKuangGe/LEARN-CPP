#include <iostream>
using std::cout;
using std::endl;
using std::string;

bool include_upper(const string& str)
{
	for (char i : str) {
		if (i >= 65 && i <= 90)
			return true;
	}
	return false;
}

void to_lower(string& str)
{
	for (char &i : str) {
		i = tolower(i);
	}
}

int main()
{
	string str = "ABc";
	cout << include_upper(str) << endl;
	to_lower(str);
	cout << str << endl;
}

// 使用的形参类型不同，因为include_upper不需要对参数进行修改，所以使用const形参
// to_lower需要对参数进行修改，所以使用普通引用