#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::strcpy;
using std::strcat;
using std::strlen;

int main()
{
    const char ca1[] = "abc";
    const char ca2[] = "def";
    char ca3[strlen(ca1) + strlen(ca2)];
    strcpy(ca3, ca1);
    strcat(ca3, ca2);
    cout << ca3 << " " << strlen(ca3) << std::endl;
    return 0;
}