// 划分分数段，满分100分，0~9/10~19以此类推，100fen单独一个段，共11个段
// 最后输出11个段每个段的人数
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec = {42,65,95,100,39,67,95,76,88,76,83,92,76,93};
    vector<int> grade(11);
    auto beg = ivec.begin(), end = ivec.end();
    auto beg_grade = grade.begin();
    while(beg != ivec.end()) {
        (*(beg_grade + *beg++/10))++;
    }
    for (auto i : grade) {
        cout << i << " ";
    }
    cout << endl;
}