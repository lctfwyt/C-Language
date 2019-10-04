# LCTHW (Learn C The Hard Way)

我的C语言学习之路

学习环境： Ubuntu 19.04 系统及其自带 gedit 文本编辑器和 Terminal

参考资料：《Learn C The Hard Way》及其中文版《笨办法学C语言》

## ex01 取出尘封的编译器

- 包含头文件`#include <stdio.h>`
- `main`函数，使用`puts`打印一行字
- 在 Terminal 中构建`make ex01`并运行`./ex01`程序
- 删除已构建的程序`rm ex01`
- 在 Terminal 中使用`man`阅读函数文档

## ex02 现在 make 就是你的 python

使用 Makefile：
- 批量（以显示所有警告的方式）构建
- 批量删除

## ex03 格式化打印

- 创建变量并赋值`type name = value;`
- 使用`printf`打印格式化字符串
- 格式化占位符`%`和转义序列`\`

## ex04 引入 Valgrind

- 使用`valgrind ./ex04`运行并 debug 程序

## ex05 C程序的结构

分解代码并说明每一个部分的作用：
- `include`将一个文件的内容导入到这个文件
- `.h`头文件中有可供使用的函数们
- 两种注释方式：`// ...`和`/* ... */`
- `main`函数各个部分：
	- `int`返回值类型
	- `(int argc, char *argv[])`接受的两个参数
	- `{}`任何函数的开头和结尾
	- `return 0;`返回语句
- 变量声明和赋值
- `printf`函数可以带可变数量个参数

## ex06 变量类型

| 类型 | 声明 | 格式化占位符 |
| --- | --- | --- |
| 整数 | `int name` | `%d` |
| 浮点数 | `float/double name` | `%f` |
| 字符(单引号) | `char name` | `%c` |
| 字符串/字符数组(双引号) | `char name[]` | `%s` |

## ex07 更多变量 一些算术

| 类型 | 声明 | 格式化占位符 | 范围 |
| --- | --- | --- | --- |
| 长整数 | `long name` | `%ld` | -2^63 ~ 2^63 - 1 |
| 无符号长整数 | `unsigned long name` | `%lu` | 0 ~ 2^64 -1 |

- `%e`以科学计数法的形式打印
- `\0`空字节字符：
	- 可与一个数相乘得到`\0`
	- `%c`什么也不打印
	- `%d`打印数字`0`
	- `%s`Terminal 会有 Warning，打印`(null)`
- `%%` 打印百分号
