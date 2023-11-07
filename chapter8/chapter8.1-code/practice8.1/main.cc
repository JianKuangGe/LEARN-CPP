#include <iostream>
#include <stdexcept>
using std::runtime_error;
using std::istream;
using std::endl;
using std::cout;
using std::cin;
using std::cerr;


istream& fun(istream& in) {
    int v;
    while (in >> v, !in.eof()) {
        if (in.bad()) {
            throw runtime_error("IO流错误");
        }
        if (in.fail()) {
            //cerr << "数据错误，请重试" << endl;
            in.clear();
            in.ignore(1, '\n');
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}

int main()
{
    fun(cin);
}

