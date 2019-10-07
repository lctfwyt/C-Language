# LCTHW (Learn C The Hard Way)

我的C语言学习之路

学习环境： Ubuntu 19.04 系统及其自带 gedit 文本编辑器和 Terminal

参考资料：《Learn C The Hard Way》及其中文版《笨办法学C语言》

在 Terminal 中批量将 ex1-9.c 重命名为 ex01-09.c：`rename 's/ex/ex0/' ex?.c`

## 笔记目录

- [ex01 取出尘封的编译器](#ex01-取出尘封的编译器)
- [ex02 现在 make 就是你的 python](#ex02-现在-make-就是你的-python)
- [ex03 格式化打印](#ex03-格式化打印)
- [ex04 引入 Valgrind](#ex04-引入-Valgrind)
- [ex05 C程序的结构](#ex05-C程序的结构)
- [ex06 变量类型](#ex06-变量类型)
- [ex07 更多变量 一些算术](#ex07-更多变量-一些算术)
- [ex08 大小和数组](#ex08-大小和数组)
- [ex09 数组和字符串](#ex09-数组和字符串)
- [ex10 字符串数组 循环](#ex10-字符串数组-循环)
- [ex11 while 循环和布尔表达式](#ex11-while-循环和布尔表达式)
- [ex12 if, else if, else](#ex12-if,-else-if,-else)
- [ex13 switch 语句](#ex13-switch-语句)
- [ex14 编写并使用函数](#ex14-编写并使用函数)

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

- 声明变量并初始化`type name = value;`
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
	- `(int argc, char *argv[])`接收的两个参数
	- `{}`任何函数的开头和结尾
	- `return 0;`返回语句
- 变量声明和初始化
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
| 长整数 | `long name` | `%ld` | - 2 ^ 63 ~ 2 ^ 63 - 1 |
| 无符号长整数 | `unsigned long name` | `%lu` | 0 ~ 2 ^ 64 - 1 |

- `%e`以科学计数法的形式打印
- `\0`空字符：
	- 可与一个数相乘得到`\0`
	- `%c`什么也不打印
	- `%d`打印数字`0`
	- `%s`Terminal 会有 Warning，打印`(null)`
- `%%` 打印百分号

## ex08 大小和数组

- 在C语言中，字符串就是字符数组
- 声明数组并初始化`type name[] = {..., ..., ...}`
- 字符串/字符数组初始化后，其末尾会自动添加一个空字符`\0`
- 字符串/字符数组还可以这样简便地初始化`char name[] = "...";`
- `sizeof`函数：
	- 返回`type`或`name`所占内存字节数
	- 可用`\ld`或`\lu`打印
	- `int`的大小为 4，`char`的大小为 1
	- 数组大小为其单个元素大小乘以元素个数
	- 字符串/字符数组使用第二种初始化的方式，其大小会加 1，可能是算上了自动加上的空字符`\0`，但使用第一种初始化的方式就不会加 1，为什么呢？
- 数组`name`的第 n+1 项`name[n]`，n 从 0 开始
- 如果 n+1 超出了数组长度，`name[n]`随机返回一个值
- 可以用`name[n] = value;`为数组第 n+1 个元素重新赋值
- `\"`打印引号

## ex09 数组和字符串

- 初始化长度为 n 的数组`type name[n] = {...};`, 未指定的元素默认初始化为数字`0`或空字符`\0`
- 又一种初始化字符串/字符数组的方法：使用指针`type *name = "...";`，但是里面的字符/元素无法被重新赋值
- 将指定长度字符串的最后一个字符初始化为`\0`以外的字符，或将字符串末尾空字符`\0`重新赋值为其他字符会产生 bug

## ex10 字符串数组 循环

- `main`函数接收的两个参数：
	- `argc`是运行程序时用户输入的字符串个数
	- `argv`是字符串数组，储存用户输入的字符串们
	- `argv`的第一个元素`argv[0]`是`"./ex10"`
- `for`循环：
```
for(INITIALIZER; TEST; INCREMENTER) {
CODE;
}
```
- 自增语句`i++`相当于`i = i + 1`，`i--`则是自减
- 声明**字符串数组**并初始化`char *name[] = {"...", "...", ...};`，其中的元素可被重新赋值
- 空指针`NULL`赋值给字符串数组中的一个元素，打印`(null)`

## ex11 while 循环和布尔表达式

- 在 C 语言中没有真正的“布尔”类型，0 代表 `false`，其他值代表`true`
- `while`循环：
```
while(TEST) {
CODE;
}
```
- 应优先选择`for`循环，因为`while`循环需要额外写初始化语句并让 i 增加，容易出错

## ex12 if, else if, else

- `if`语句：
```
if(TEST) {
CODE;
} [else if(TEST) {
CODE;
} else {
CODE;
}]
```
- 布尔运算符：

| 符号 | 含义 | 符号 | 含义 | 符号 | 含义 |
| --- | --- | --- | --- | --- | --- |
| `==` | 等于 | `<` | 小于 | `&&` | 与 |
| `!=` | 不等于 | `>=` | 大于等于 | `\|\|` | 或 |
| `>` | 大于 | `<=` | 小于等于 | `!` | 非 |

- 提前终止循环`break;`

## ex13 switch 语句

- 非正常终止程序的返回语句`return 1;`
- `switch`语句：
```
switch(SOMETHING) {
	case ONE_THING:
		CODE;
		break;
	[case SECOND_THING: // fallthrough
	case THIRD_THING:
		CODE;
		break;
	...]
	default:
		CODE;
}
```
- 如果能够简化，用`if`语句替代
- ASCII 码：

| 字符 | ASCII 码 |
| --- | --- |
| `(space)` | 32 |
| `0`~`9` | 48 ~ 57 |
| `A`~`Z` | 65 ~ 90 |
| `a`~`z` | 97 ~ 122 |

- 转换大小写：直接让字符减去或加上 32

## ex14 编写并使用函数

- 如果一个函数还未被定义就被使用，可以做前向声明`type name([type argument1, ...]);`
- 函数定义：
```
type name([type argument1, ...]) {
	CODE;
	[return ...;]
}
```
- 头文件`ctype.h`里的函数：

| 函数 | 作用 |
| --- | --- |
| `isalpha` | 判断是否是字母 |
| `isdigit` | 判断是否是数字 |
| `isalnum` | 判断是否是字母或数字 |
| `isblank` | 判断是否是空格或 tab |

- 头文件`string.h`里的函数：`strlen`返回一个字符串包含的字符数(不包括末尾的`\0`)
