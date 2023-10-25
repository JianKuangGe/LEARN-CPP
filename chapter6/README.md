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



























