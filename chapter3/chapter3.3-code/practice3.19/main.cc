// 个人觉得vector<int> v1(10, 42);的方法最好用，简洁明了
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1(10, 42);
    vector<int> v2(10);
    for (decltype(v2.size()) i = 0;
        i != v2.size(); i++) {
        v2[i] = 42;
    }
    vector<int> v3;
    for (int i = 0; i != 10; i++) {
        v3.push_back(42);
    }
    vector<int> v4{42,42,42,42,42,42,42,42,42,42};
    for (auto i : v1) {
        cout << i;
    }
    cout << endl;
    for (auto i : v2) {
        cout << i;
    }
    cout << endl;
    for (auto i : v3) {
        cout << i;
    }
    cout << endl;     
}