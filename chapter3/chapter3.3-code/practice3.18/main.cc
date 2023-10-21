// 不合法，不能通过索引向vector或string中增加元素
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    ivec.push_back(42);
    cout << ivec[0] << endl;
}