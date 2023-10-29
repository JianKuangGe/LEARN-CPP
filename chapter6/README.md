> 函数基础
>
> 参数传递
>
> 返回类型和return语句
>
> 函数重载
>
> 函数匹配
>
> 函数指针

函数的返回类型

函数的返回类型不能是数组类型或是函数类型，但可以是指向数组或函数的指针。

---

局部对象

正常来讲定义在函数体内的变量，在函数执行结束后即被销毁，但是我们可以通过static关键字来使该对象的生命周期贯穿整个程序。

通过extra1来演示下，这个变量会记录本函数被调用的次数。注意，如果cout不使用static会发生什么呢，10次循环会全部输出1，因为每次调用call_cout时都会重新生成cout变量

```cpp
#include <iostream>
using std::cout;
using std::endl;

int call_cout()
{
    // 使用static
    static int cout = 0;
    cout++;
    return cout;
}

int main()
{
    for(int i = 0; i != 10; i++) {
        cout << call_cout() << endl;
    } 
}
```

---

函数声明

函数定义放在源文件中，函数声明放在头文件中

---

分离式编译

我们可以将分割到几个文件中去，每个文件独立编译，最终再连接到一起

例如：我有两个代码文件fact.cc，factMain.cc

```bash
// 会生成fact.o和factMain.o两个文件
g++ -c fact.cc
g++ -c factMain.cc

// 将对象文件进行链接
g++ fact.o factMain.o
```

---

参数传递

当形参时引用类型时，我们说它对应的实参被引用传递或函数被传引用调用。

```cpp
// 引用传递实例，extra1
#include <iostream>
using std::cout;
using std::endl;

void fun(int &i)
{
    i = 5;
}

int main()
{
    int num = 0;
    int &i = num;
    fun(i);
    cout << num << endl;
}
// 最终输出结果为5，函数fun通过引用传递对num进行了赋值
```

---

传引用参数

拷贝大的类类型对象或者容器对象比较低效，甚至有的类类型不支持拷贝操作，我们可以使用传引用参数的方式。

如果函数无需改变引用形参的值，最好将其声明为常量引用。

一个函数只能返回一个值，我们可以借用引用参数的方式来让函数返回多个值。

---

Const形参和实参

当Const作为函数的形参时，在函数调用时，实参初始化会会忽略掉顶层Const

---

数组形参

之前学习数组时有说过，就是数组不能进行拷贝赋值，那我我们想让数组作为函数的参数时应该怎么做呢？

```cpp
// 一下三种方式定义数组类型的形参都是可以的。
int print(const int *arr);
int print(const int arr[]);
int print(const int arr[10]);
```

当调用上面这个函数时，实参会自动转换成指向数组首元素的指针。

现在 出现了一个新的问题，就是之前有说过，对数组的方式不应该越界，但是我们怎么把数组的界限传递给被调用的函数呢？

有三种方式：

1. 使用标记指定数组长度，类似于C中字符串结尾的\0，但是对于int这种就不行了
2. 使用标准库规范，即begin()和end()
3. 传入数组的长度size_t，被调函数中根据这个长度来限制在数组范围内进行访问。

以上3中方式详见extra3代码实现。































