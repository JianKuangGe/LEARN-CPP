// �������¶���constָ��ָ��ǳ���ʱ���ܷ�ͨ��ָ���޸Ķ����ֵ

#include <iostream>


int main()
{
	int i = 5;
	const int *p = &i;
	*p = 10;
	std::cout << *p << std::endl;
}

// error C3892 : ��p��: ���ܸ�������ֵ