#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "", sumstr = "";
    while (getline(cin, str)) {
        str[0] = toupper(str[0]);
        sumstr = sumstr + str + " ";
    }
    cout << sumstr << endl;
}