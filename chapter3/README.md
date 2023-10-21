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

这其中涉及两部分内容，一是在字符串中拿到字符，二是对字符进行操作。

---

使用for语句遍历字符串

for (auto c : str) {

}

cctype中提供了处理字符的函数：

![image-20231021092108832](https://typora2023-1257470853.cos.ap-hongkong.myqcloud.com/image-20231021092108832.png)

c++会把c语言中的头文件name.h命名为cname,如这里的cctype就对应c语言中的ctype.h。

在名为cname的头文件中定义的名字从属于命名空间std,所以c++程序员应该尽量使用名为cname得头文件。

---

遍历字符串

在extra4中我将遍历字符串，并且使用cctype头文件中的isunct()函数来统计字符串中标点符号的个数。

主要还是for (auto c : str)的运用，但注意这是是c++11后的特性，g++编译时需要加上-std=c++17

```cpp
// 获取用户输入的字符串，输出字符串中符号的数量
#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "";
    unsigned int sum = 0;
    cin >> str;
    for (auto c : str) {
        if (ispunct(c)) {
            sum++;
        }
    }
    cout << sum << " punct" << endl;
}
```

---

使用for语句，遍历改变字符串中的字符

如果想要进行修改，那么就不能用auto c:str了，而是auto &c:str

详见extra5

```cpp
// 获取用户输入的字符串，遍历全部改为大写
#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "";
    cin >> str;
    for (auto &c : str) {
        // 这里要注意一下toupper后要赋值给回c
        c = toupper(c);
    }
    cout << str << endl;
}
```

---

只处理一部分字符

上面通过for循环的方式会遍历字符串中的所有字符，那如果我们只想要处理指定的字符呢，我们可以使用下标或迭代器，本节先讲解的是下标(即索引)

例我想访问str字符串的第二个字符，可以使用str[1]

访问str字符串的倒数最后一个字符，可以使用str[str.size()-1]

要格外注意的是使用索引访问字符串时，一定要确保索引没有超过你想要引用对象的范围，否则会发生意外的结果，例如一个字符串的长度为3，你不能使用str[3]这样会访问到其它地方去。

这里编写一个程序extra6,持续获取用户输入，将每个单词的首字母大写：

```cpp
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "", sumstr = "";
    while (getline(cin, str)) {
        str[0] = toupper(str[0]);
        sumstr = sumstr + str + " ";
    }
    cout << sumstr << endl;
}
```

我们可以通过下标迭代的方式进行字符串的遍历，如extra7,需要注意的是使用这种方式，最好将index的类型设置为size_type,即使用decltype(str.size())来指定类型

```cpp
// 使用索引遍历字符串，将字符串的字母全部改为大写
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "";
    while (cin >> str) {
        for (decltype(str.size()) index = 0;
            index < str.size(); index++) {
                str[index] = toupper(str[index]);
            }
        cout << str << " ";
    }
    cout << endl;
}
```

---

标准库类型vector

vector也被称为容器，要想使用的话必须要包含vector头文件

```cpp
#include <vector>
using std::vector;
```

C++中有类模板和函数模版，vector就是一个类模版。

根据模版创建类或者函数的过程称为实例化，使用模版时，我们需要提供一些信息给到编译器，我们想要生成什么样的模版。这些信息通过<>符号提供，例如vector<int> ivec;就是实例化一个存放int类型的容器。

---

定义和初始化vector对象

![image-20231021111532138](../../../Library/Application Support/typora-user-images/image-20231021111532138.png)

初始化vector跟其它对象一样，有两种方式，拷贝初始化和列表初始化

```cpp
// 拷贝初始化
vector<int> vec = vec1;
vector<int> vec(vec1);

// 列表初始化
vector<int> vec{1, 2, 3};
vector<int> vec = {1, 2, 3};
```

值初始化

我们也常常只提供vector可以容纳元素的格式，而不直接赋值

例如vector<int> vec(10);就定义了一个可容纳10个int元素的容器。其中这10的元素的默认值都是0。

需要注意的是初始化时的大括号和小括号，因为这两个会造成比较大的不一致，例如

```cpp
// 下面初始化的是一个长度为10的，每个元素都是1的容器
vector<int> vec1(10, 1);
// 下面初始化的是一个长度为2的，包含元素10和1的容器
vector<int> vec2{10, 1};
```

---

向vector对象中添加元素

可以使用vector的push_back方法将元素添加至容器的末尾

vector能再运行时高效快速的添加元素，所以在定义vector时设定大小也就没什么必要了，事实上如果这么做性能可能更差。

v.push_back(i);

如果循环体内部有向vector对象添加元素的语句，则不能使用for循环。

---

其它vector操作

vector除了push_back()外还有其它操作，大部分都跟string类似

![image-20231021124448898](https://typora2023-1257470853.cos.ap-hongkong.myqcloud.com/image-20231021124448898.png)

注意vector对象以及string对象的下标运算符可用于访问已存在的元素，而不能用于添加元素。

---

练习practice3.16中引发的思考，做错的是下面这两个：

```cpp
vector<string> v6{10};
vector<string> v7{10, "hi"};
```

之前还以为这里的10会被丢弃，而事实上是，vector尝试用列表初始化失败时(因为10是int类型)，会考虑把大括号转换成小括号进行初始化。

当然可能会问如果列表里是不是两个元素而是多个呢，嘿嘿，会报错。

---

迭代器

除了vector之外，标准库还定义了其它几种容器，所有的标准库容器都可以使用迭代器，但只有其中的少数同时支持下标运算符。

- begin()指向容器的第一个元素
- end()指向容器的尾元素的下一个元素，也叫做尾后元素

---

迭代器的运算

迭代器类似一个指针，可以进行解引用，但比指针多的是，迭代器可以++和--，用来指向容器的下/上一个元素。

需要注意的是因为end返回的迭代器并不实际指向某个元素，所以不能对其进行递增和解引用操作。

extra1

---

begin和end返回的类型由对象是否为常量决定，如果对象是常量，则begin和end也是常量。

有时虽然对象不是常量，但我们想保证对对象只有读操作而不是写操作的话，可以使用cbegin和cend，这样就总是返回常量。

---

如果迭代器所指的对象是类，那么可以进一步访问它的成员。可以(*it).empty();

为了简化，有了箭头运算符替代it-->empty();

---

迭代器运算

![image-20231021160534716](https://typora2023-1257470853.cos.ap-hongkong.myqcloud.com/image-20231021160534716.png)

---

使用迭代器进行二分查找

二分查找的对象应该是有序的，且没有重复值

binary_search

这里在extra2中给出使用迭代器进行二分查找的代码

```cpp
// binary_search
// 这里写一个二分查找的函数，查找给定值
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

// 二分查找函数
// 1 2 3 5 7 9 x
int binary_search(vector<int> ivec, int i)
{
    auto beg = ivec.cbegin(), end = ivec.cend();
    auto mid = beg + (end - beg)/2;
    while (mid != end) {
        if (i < *mid) {
            end = mid;
        }
        else if (i > *mid){
            // 这里记得是mid+1
            beg = mid + 1;
        }
        else {
            // 找到，返回mid跟begin的差，即mid的索引
            return mid - ivec.cbegin();
        }
        mid = beg + (end - beg)/2;
    }
    return -1;
}

int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i) {
        ivec.push_back(i);
    }
    auto find_index = binary_search(ivec, 5);
    cout << find_index << endl;
}
```





























































