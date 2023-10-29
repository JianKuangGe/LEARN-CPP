#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
	string str1 = argv[1];
	string str2 = argv[2];
	string str = str1 + str2;
	cout << str << endl;
}