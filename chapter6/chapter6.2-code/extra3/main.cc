#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::begin;
using std::end;


// 使用标记指定数组长度
// 这里的形参虽然是以数组形式表示的，但是其本质上仍是数组首元素的指针
void print_array1(const char arr[])
{
	while (*arr) {
		cout << *arr++;
	}
	cout << endl;
}


// 使用标准库规范
void print_array2(const char* beg, const char* end)
{
	while (beg != end) {
		cout << *beg++;
	}
	cout << endl;
}

// 显示传递数组长度
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