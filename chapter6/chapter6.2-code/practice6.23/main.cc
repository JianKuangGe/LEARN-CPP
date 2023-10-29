#include <iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int i)
{
	cout << i << endl;
}

void print(const int* beg, int* end)
{
	while (beg != end) {
		cout << *beg++ << " ";
	}
	cout << endl;
}

int main()
{
	int i = 0;
	int j[2] = { 0, 1 };
	print(i);
	print(begin(j), end(j));
}