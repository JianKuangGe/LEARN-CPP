#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main()
{
    const vector<int> ivec = {1, 2, 3};
    int ia[ivec.size()];
    for (int i = 0; i != ivec.size(); i++) {
        // 这里数组用的下标法，vector用的迭代器法
        ia[i] = *(ivec.begin()+i);
    }
    for (auto i : ia) {
        cout << i << endl;
    }
}
