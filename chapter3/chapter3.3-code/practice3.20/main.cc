#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> ivec;
    int i;
    // 将输入存放至vector中
    while (cin >> i) {
        ivec.push_back(i);
    }
    for (decltype(ivec.size()) index = 0;
        index != ivec.size(); index++) {
            if (index != ivec.size()-1-index) {
                cout << ivec[index] + ivec[ivec.size()-1-index] << " ";
            }
            else {
                cout << ivec[index] << " ";
            }
        }
    cout << endl;
}