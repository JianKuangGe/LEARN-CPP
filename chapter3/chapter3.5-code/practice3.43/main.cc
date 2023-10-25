#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {2,2,3,4}
    };
    // 版本1，使用范围for输出ia
    cout << "---version1---" << endl;
    for (const int *row[4] : ia) {
        for (int col : row) {
            cout << col << endl;
        }
    }
}