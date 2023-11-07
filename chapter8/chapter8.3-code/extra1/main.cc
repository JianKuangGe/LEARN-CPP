#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;

int main()
{
    ifstream in("./phones.txt");
    if (!in) {
        return -1;
    }
    struct PersonInfo {
        string name;
        vector<string> phone_num;
    };
    string line;
    vector<PersonInfo> people;
    while (getline(in, line)) {  // 将每行保存到line中
        PersonInfo info;
        istringstream line_strm(line);  // 将string转换为流
        line_strm >> info.name;
        string phone;
        while (line_strm >> phone) {
            info.phone_num.push_back(phone);
        }
        people.push_back(info);
    }
    // print people
    for (auto beg = people.begin(); beg != people.end(); beg++) {
        cout << beg -> name << endl;
        for (auto p_beg = (beg -> phone_num).begin(); p_beg != (beg -> phone_num.end()); p_beg++) {
            cout << *p_beg << endl;
        }
        cout << "-----------------------" << endl;
    }
}