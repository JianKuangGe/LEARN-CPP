#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5};
/*     int i;
    while (cin >> i) {
        ivec.push_back(i);
    } */
    auto beg = ivec.begin(), end = ivec.end()-1;
    while (beg != ivec.end()) {
        if (beg != end) {
            cout << *beg++ + *end-- << " ";
        }
        else {
            cout << *beg++ << " ";
            --end;
        }
        
    }
    cout << endl;
}