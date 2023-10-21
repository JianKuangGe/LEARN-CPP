// 验证一下beg是不是永远都不会等于end
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5};
    auto beg = ivec.cbegin(), end = ivec.cend();
    beg += 2;
    end -= 3;
    if (beg == end) {
        cout << "相等";
    }
    else {
        cout << "beg: " << *beg << endl;
        cout << "end: " << *end << endl;
    }
}