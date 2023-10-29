#include <iostream>
using std::cout;
using std::endl;
using std::string;

inline bool isshoter(const string& str1, const string& str2)
{
	return str1.size() < str2.size();
}

int main()
{
	string str1 = "12345", str2 = "1234";
	cout << isshoter(str1, str2) << endl;
}