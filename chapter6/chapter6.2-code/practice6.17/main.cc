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

// ʹ�õ��β����Ͳ�ͬ����Ϊinclude_upper����Ҫ�Բ��������޸ģ�����ʹ��const�β�
// to_lower��Ҫ�Բ��������޸ģ�����ʹ����ͨ����