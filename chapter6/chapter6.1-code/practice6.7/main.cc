#include <iostream>
using std::cout;
using std::endl;

int call_cout()
{
    static int cout = 0;
    return cout++;
}

int main()
{
    for(int i = 0; i != 10; i++) {
        cout << call_cout() << endl;
    } 
}