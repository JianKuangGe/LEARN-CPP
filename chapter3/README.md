> 本章将学习数组、标准库类型string和vector

---

命名空间的using声明

using namespace::name;

每个using声明引入一个成员。

位于头文件的代码，一般来说不应该使用using声明，因为头文件中的内容会拷贝到所有引用到它的文件中去，可能会不经意间包含了某个名字，引起冲突。

---

标准库类型string

string标识可变长的字符序列，使用该类型必须先包含string头文件。

```cpp
#include <string>
using std::string;
```

- 拷贝初始化：在初始化中使用了=号，例如int i =n;
- 直接初始化: 在初始化中没有使用=号，例如string s4(n, 'c');

---

string对象上的操作

我们可以使用<<来写入/读取string的值，例如extra1

```cpp
// 持续获取用户输入后输出
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string str;
    while (cin >> str) {
        cout << str << " ";
    }
}
```

---

使用getline函数读取一行

我们可以通过使用getline函数替换>>符来逐行获取输入

getine(cin, str);

需要注意的是getline会读入换行符，但存到str中时不存入换行符。

我们通过extra2来测试一下

```cpp
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str;
    while (getline(cin, str)) {
        cout << str << endl;
    }
}
```

---

empty和size方法

- empty根据string对象是否为空返回一个布尔值，str.empty()
- size返回string对象中字符的个数，str.size()

下面在extra3中测试一下:

```cpp
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, sum_str = "";
    while (getline(cin, str)) {
        if (!str.empty()) {
            sum_str += str;
        }
    }
    cout << sum_str << endl;
    cout << sum_str.size() << endl;
}
```

需要注意的是size()方法返回的是一个size_type类型的值，它是一个无符号类型的数，前面有说过，如果在表达式中混用了带符号数和无符号数，会产生意想不到的结果。

如果表达式中已有了size()就不要再用Int了

---

比较string对象

---

string中的相加

这里有一点需要注意的是，+的两边至少有一个是string对象，即不能把两个字符串字面值加在一起，例如下列操作是非法的。

```cpp
string c = "hello" + "you";
```

由于某些历史原因，C++中的字符串字面值并不是string类型的。

---

处理string中的字符

我们有时会单独处理string中的字符，例如修改其中的特定字符等。







































