#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::string;
using std::strcpy;
using std::strcat;
using std::strlen;

int main()
{
    const char ca1[] = "abc";
    const char ca2[] = "def";
    char ca3[strlen(ca1)+strlen(ca2)];
    strcat(ca1, ca2);
    strcpy(ca3, ca1);
    for (auto i : ca3) {
        cout << i;
    }
    cout << endl;
}