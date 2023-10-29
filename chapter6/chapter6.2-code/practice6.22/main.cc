#include <iostream>
using std::cout;
using std::endl;

void change(int*& pn1, int*& pn2)
{
	int* px = pn1;
	pn1 = pn2;
	pn2 = px;
}

int main()
{
	int n1 = 5, n2 = 10;
	int* pn1 = &n1, * pn2 = &n2;
	cout << pn1 << " " << pn2 << endl;
	change(pn1, pn2);
	cout << pn1 << " " << pn2 << endl;
}