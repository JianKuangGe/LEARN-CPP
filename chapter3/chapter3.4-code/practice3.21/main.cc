#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

int print_vector(vector<int> ivec) {
    cout << "size: " << ivec.size() << endl;
    for (auto it = ivec.cbegin(); it != ivec.cend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << "---v1---" << endl;
    print_vector(v1);
    cout << "---v2---" << endl;
    print_vector(v2);
    cout << "---v3---" << endl;
    print_vector(v3);
}


