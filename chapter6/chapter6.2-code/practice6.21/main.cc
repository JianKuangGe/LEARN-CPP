#include <iostream>
using std::cout;
using std::endl;

int compare(const int n1, const int* pn2)
{
	if (n1 > *pn2)
		return n1;
	else
		return *pn2;
}

int main()
{
	int n1 = 5, n2 = 10;
	cout << compare(n1, &n2) << endl;
}