#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "Hello world,Hello CPP!", newstr = "";
    for (auto c:str) {
        if (!ispunct(c)) {
            newstr += c;
        }
    }
    cout << newstr << endl;
}