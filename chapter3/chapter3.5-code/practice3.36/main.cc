#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int ia1[3] = {1, 2, 3};
    int ia2[3] = {1, 2, 3};
    vector<int> ivec1 = {1, 2, 3};
    vector<int> ivec2 = {1, 2, 3, 4};
    // 比较数组无法直接比较f
    int *p_beg1 = begin(ia1);
    int *p_beg2 = begin(ia2);
    int tag = 0;
    if (end(ia1)-begin(ia1) != end(ia2)-begin(ia2)) {
        tag = 1;
    }
    else {
        for (auto i = 0; i != end(ia1) - begin(ia1); i++) {
            if (ia1[i] != ia2[i]) {
                tag = 1;
                break;
            }
        }
    }
    if (tag == 0) {
        cout << "ia1 == ia2" << endl;
    }
    else {
        cout << "ia1 != ia2" << endl;
    }


    // 比较vector，可以直接比较
    if (ivec1 == ivec2) {
        cout << "ivec1 == ivec2" << endl;
    }
    else {
        cout << "ivec1 != ivec2" << endl;
    }
}