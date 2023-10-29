// 用来看下顶层const指针指向非常量时，能否通过指针修改对象的值

#include <iostream>


int main()
{
	int i = 5;
	const int *p = &i;
	*p = 10;
	std::cout << *p << std::endl;
}

// error C3892 : “p”: 不能给常量赋值