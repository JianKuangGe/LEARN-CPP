#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::begin;
using std::end;


// ʹ�ñ��ָ�����鳤��
// ������β���Ȼ����������ʽ��ʾ�ģ������䱾��������������Ԫ�ص�ָ��
void print_array1(const char arr[])
{
	while (*arr) {
		cout << *arr++;
	}
	cout << endl;
}


// ʹ�ñ�׼��淶
void print_array2(const char* beg, const char* end)
{
	while (beg != end) {
		cout << *beg++;
	}
	cout << endl;
}

// ��ʾ�������鳤��
void print_array3(const char arr[], size_t size)
{
	for (int i = 0; i != size; i++) {
		cout << *(arr + i);
	}
	cout << endl;
}

int main()
{
	char arr[] = "Abc123\0";
	print_array1(arr);
	print_array2(begin(arr), end(arr));
	print_array3(arr, 7);
}