#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << "\n---v1---" << endl;
    cout << "cout: " << v1.size() << endl;
    for (auto c : v1) {
        cout << c << " ";
    }
    cout << "\n---v2---" << endl;
    cout << "cout: " << v2.size() << endl;
    for (auto c : v2) {
        cout << c << " ";
    }
    cout << "\n---v3---" << endl;
    cout << "cout: " << v3.size() << endl;
    for (auto c : v3) {
        cout << c << " ";
    }
    cout << "\n---v4---" << endl;
    cout << "cout: " << v4.size() << endl;
    for (auto c : v4) {
        cout << c << " ";
    }
    cout << "\n---v5---" << endl;
    cout << "cout: " << v5.size() << endl;
    for (auto c : v5) {
        cout << c << " ";
    }
    cout << "\n---v6---" << endl;
    cout << "cout: " << v6.size() << endl;
    for (auto c : v6) {
        cout << c << " ";
    }
    cout << "\n---v7---" << endl;
    cout << "cout: " << v7.size() << endl;
    for (auto c : v7) {
        cout << c << " ";
    }
}
