#include <iostream>
#include <vector>
#include <fstream>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

int main()
{
    ifstream in("text.txt");
    vector<string> strvec;
    if (in) {
        string word;
        while (in >> word) {
            strvec.push_back(word);
        }
    } else {
        return -1;
    }
    // print strvec
    for (auto beg = strvec.begin(); beg != strvec.end(); beg++) {
        cout << *beg << endl;
    }
}
