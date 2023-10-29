#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg < end-1) {
		print(beg+1, end);
	}
	cout << *beg << endl;
}

int main()
{
	vector<int> ivec = { 1,2,3,4,5 };
	print(ivec.begin(), ivec.end());
}