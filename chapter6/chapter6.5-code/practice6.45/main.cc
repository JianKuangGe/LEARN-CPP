#include <iostream>
using std::cout;
using std::endl;
using std::string;


constexpr bool isshoter(const string str1, const string str2)
{
	return str1.size() < str2.size();
}

int main()
{
	const string str1 = "12345";
	const string str2 = "1234";
	cout << isshoter(str1, str2) << endl;
}