#include <iostream>
using std::cout;
using std::endl;
using std::initializer_list; 

int sum(initializer_list<int> il)
{
	int sum = 0;
	for (int i : il) {
		sum += i;
	}
	return sum;
}

int main()
{
	cout << sum({ 1, 3, 5 }) << endl;
}