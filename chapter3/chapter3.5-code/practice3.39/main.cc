#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::strcmp;
using std::string;

int main()
{
    string str1 = "123";
    string str2 = "1234";
    const char s1[] = "123";
    const char s2[] = "1234";
    cout << (str1 == str2) << endl;
    cout << strcmp(s1, s2) << endl;
}