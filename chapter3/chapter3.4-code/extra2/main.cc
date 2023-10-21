// binary_search
// 这里写一个二分查找的函数，查找给定值
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

// 二分查找函数
// 1 2 3 5 7 9 x
int binary_search(vector<int> ivec, int i)
{
    auto beg = ivec.cbegin(), end = ivec.cend();
    auto mid = beg + (end - beg)/2;
    while (mid != end) {
        if (i < *mid) {
            end = mid;
        }
        else if (i > *mid){
            beg = mid + 1;
        }
        else {
            return mid - ivec.cbegin();
        }
        mid = beg + (end - beg)/2;
    }
    return -1;
}

int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i) {
        ivec.push_back(i);
    }
    auto find_index = binary_search(ivec, 15);
    cout << find_index << endl;
}