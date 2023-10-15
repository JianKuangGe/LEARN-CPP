# 第一章 开始

> 还是要从头学起，当做第一次学编程吧，踏踏实实认认真真的学完。

> 本章学习完后，会完成一个关于书店销售记录档案的程序
>
> ![image-20231015153146887](https://typora2023-1257470853.cos.ap-hongkong.myqcloud.com/image-20231015153146887.png)

> 本章小节如下：
>
> 1. Hello World
> 2. 输入输出
> 3. 注释简介
> 4. 控制流
> 5. 类简介
> 6. 书店程序

## 1.2.初识输入输出

一般使用IO库(iostream)中的cin和cout进行输入和输出。

示例程序1：获取用户输入的两个数，打印出这两个数的和。

```cpp
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "The sum of " << n1 << " and " << n2  << " is " << n1 + n2 << std::endl;
    return 0;
}
```

这里要注意的点就是使用cin后面可以接多个变量，感觉这是一个比较神奇的用法，就是可以输完一个数字后回车再输下一个数，也可以两个数字之间空格分开一次输完。

![image-20231015155437821](https://typora2023-1257470853.cos.ap-hongkong.myqcloud.com/image-20231015155437821.png)

![image-20231015155525393](https://typora2023-1257470853.cos.ap-hongkong.myqcloud.com/image-20231015155525393.png)

## 1.3.注释简介

- 单行 //
- 多行 /**/

## 1.4.控制流

> while循环
>
> for循环
>
> if判断

while循环：

```cpp
while (condition) {
    statement
}

```

---

持续获取用户输入

参考示例程序(sample1),持续获取用户输入的数字并求和:

当标准输入当做循环的条件时，就是检测输入流的状态，当遇到文件结束符或者无效输入时（例如这里的输入小数），输入流的状态会无效，条件作假。

文件结束符：

- Windows: Ctrl + Z
- Mac/linux: Ctrl + D

```cpp
#include <iostream>

int main()
{
    int sum = 0, num = 0;
    std::cout << "input number" << std::endl;
    while (std::cin >> num) {
        sum += num;
    }
    std::cout << "the sum is " << sum << std::endl;
    return 0;
}
```

![image-20231015174506235](https://typora2023-1257470853.cos.ap-hongkong.myqcloud.com/image-20231015174506235.png)

---

if判断



















































