#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    for (int i = 1; i != 11; i++) {
        ivec.push_back(i);
    }
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
    for (auto it = ivec.begin();
        it != ivec.end(); it++) {
            *it *= 2;
        }
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}