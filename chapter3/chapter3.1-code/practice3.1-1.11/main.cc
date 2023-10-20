// 重做练习1.11
# include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "input start and end" << endl;
    int start = 0, end = 0;
    cin >> start >> end;
    if (start >= end) {
        while (start >= end) {
            cout << start << endl;
            start--;
        }
    }
    else {
        while (start <= end) {
            cout << start << endl;
            start++;
        }
    }
}