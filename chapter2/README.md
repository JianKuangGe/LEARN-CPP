> 如果说上一章是让你了解C++的话，那么从这一章开始就是正式学习C++了
>
> 大多数的编程语言都少不了下面这些内容：
>
> 数据类型、表达式、语句、函数、类
>
> 接下来的二到七章，我们要学习的就是上述内容。

> 本章(第二章)我们要学习的是“变量和基本数据类型”

基本数据类型包括算数类型和空类型(void)

算数类型又分两类：整型(包括字符和布尔在内)和浮点型

C++标准规定了类型的最小尺寸，比较常见的有：

- char 8bit
- int 16bit
- long 32bit
- long long 64bit
- float 6位有效数字
- double 10位有效数字

选择类型的建议:

1. 当明确知晓数值不可能为负时，选择无符号类型。
2. 实际中，long一般和int拥有一样的尺寸，如果数值超过了int的表示范围，通常使用long long。
3. 执行浮点运算选用double，因为float通常精度不够，且float和double的计算代价相差无几，一般情况下不用使用long double,它会带来额外的运行时消耗。

---

类型转换

当在程序中我们使用了一种类型而其实对象应该读取另一种类型时，程序会自动进行类型转换。

![image-20231017175034512](../../../Library/Application Support/typora-user-images/image-20231017175034512.png)

程序应该尽量避免依赖于实现环境的行为。

可能引发隐式的类型转换的情况有如下：

1. 把一种算数类型的值赋予另外一种类型。
2. 当程序中的某处使用了一种算数类型中的值而实际所需的是另一种类型的值。例如while(5)
3. 含有无符号类型的表达式，当带符号类型为负数时，带符号类型会被转换成无符号类型。

---

字面值常量

- 十进制：20
- 八进制：020
- 十六进制：0x20

由单引号引起的一个字符称为char型字面值

双引号引起的零个或多个字符称为字符串字面值

字符串字面值实际是由常量字符构成的数组

编译器在每个字符串的结尾处添加一个空字符('\0'),所以字符串长度比它实际内容多1

多行字符串：

![image-20231017182206151](../../../Library/Application Support/typora-user-images/image-20231017182206151.png)

---

对象是指一块能存储数据并具有某种类型的内存空间。

要注意的是初始化和赋值不是一个东西。

使用花括号进行初始化的形式称为列表初始化，这种方式的好处是，如果我们使用列表初始化且初识值存在丢失信息的风险时，编译器会报错，例如（extra1）：

double id = 3.14;

int a = {id};

很遗憾，当我在extra1中使用如下代码时,编译器并没有报错，并且使用int a{id}的方式进行初始化会报错。

```cpp
// 确认列表初始化存在丢失信息风险时的编译器报错

# include <iostream>

int main()
{
    long double m = 3.1415926536;
    int n{m}, i = {m};
//    std::cout << n << i <<std::endl;
    return 0;
}

❯ g++ -o extra1 ./main.cc
./main.cc:8:10: error: expected ';' at end of declaration
    int n{m}, i = {m};
         ^
         ;
1 error generated.
```

---

默认初始化

如果定义变量时没有初始化，则变量会被默认初始化，定义在函数体内部的内置类型变量将不被初始化，参考practice2.10中local_int的值在每次程序执行时都不一样。

建议初始化每一个内置类型的变量，使用未初始化变量的值是一种错误的编程行为，并很难调试，所以一定要避免。

---

声明和定义

声明一个变量使用关键字extern,例如extern int i;

声明是为了什么？是为了能够跨文件共用变量，参考extra2,我在extern.h中定义了一个变量i,那我想在main中使用这个i需要怎么做呢，肯定不能是用int i;因为这样会重新生成一个名为i的变量，这时候声明的作用就体现出来了，“声明”在这里的作用就是，我想要使用这个名字的变量，但并不是重新定义它。

变量能且只能被定义一次，但是可以被多次声明.

任何包含了显示初始化的声明即成为定义，如extern int i = 5;

---

变量命名规范：

1. 变量名一般全部小写
2. 自定义的类名一般大写字母开头

用户自定义的标识符有以下要求：

1. 不能连续出现两个下划线
2. 不能以下划线紧连大写字母开头
3. 定义在函数体外的标识符不能以下划线开头

---

作用域

一般来说，在对象第一次被使用的地方附近定义它是一个好的选择。

---

复合类型

引用

复合类型就是基于其它类型定义的类型，包括引用、指针等

我们通常说的引用是指“左值引用”

“引用”相当于给变量起了另一个名字，通过&符号进行定义，例如：

int m = 5;

int &n = m;

这里就是定义了一个名为n的引用，n就是m的另一个别名，它俩在内存中实际是同一个东西。

因为“引用”不是一个对象，所以不能定义“引用”的引用。

引用只能绑定到对象上，不能绑定到某个字面值或表达式的计算结果。

引用就是别名，请忘记地址之类的东西

---

指针

指针跟引用类似，都是实现了对其它对象的间接访问，但又有些不同：

1. 指针本身也是一个对象
2. 指针无需在定义时赋值，如果在块作用域内定义没有被初始化时，它将拥有一个不确定的值(非常危险的操作)

定义指针：

定义指针类型的符号是*

指针存放某个对象的地址，要想获得该地址，需要使用取地址符&

int i = 5;

int *p = &i;

此时p中存放的就是i的地址了。

利用指针访问对象：

如果指针指向了一个对象，则使用解引用符*来访问该对象。

int i = 5;

int *p = &i;

cout << *p;

---

关于*和&

- &出现在左侧时为定义引用，右侧时为取地址符

- *出现在左侧时为定义指针，右侧时为解引用符

---

空指针

不指向任何对象的指针

定义空指针的方法：

- int *p1 = nullptr;
- int *p2 = 0;

把int变量直接赋值给指针是错误的操作，即使int变量的值恰好为0也不行。

严禁使用未经初识化的指针，所有的指针在定义时都要做初始化。

---

void*指针

void*指针可以存放任意类型对象的地址

---

指针和引用的区别：

引用是类似别名的东西并不是一个实际的对象，指针存放着对象的地址，指针本身也是一个对象。














































