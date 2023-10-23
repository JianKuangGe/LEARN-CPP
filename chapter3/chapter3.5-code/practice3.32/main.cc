#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int ia1[10];
    for (int i = 0; i != 10; i++) {
        ia1[i] = i;
    }
    cout << "ia1: ";
    for (auto i : ia1) {
        cout << i << " ";
    }
    cout << endl;
    int ia2[10];
    // 将ia1的值赋值给ia2
    for (int i = 0; i!= 10; i++) {
        ia2[i] = ia1 [i];
    }
    // 输出ia2
    cout << "ia2: ";
    for (auto i : ia2) {
        cout << i << " ";
    }
    cout << endl;

    // 使用vector重写程序
    vector<int> ivec1, ivec2;
    for (int i = 0; i != 10; i++) {
        ivec1.push_back(i);
    }
    ivec2 = ivec1;
    // 输出ivec1和ivec2
    cout << "ivec1: ";
    for (auto i : ivec1) {
        cout << i << " ";
    }
    cout << endl;
    cout << "ivec2: ";
    for (auto i : ivec2) {
        cout << i << " ";
    }
    cout << endl;
}