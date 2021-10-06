// 练习2.20: 请叙述下面这段代码的作用。
// int i = 42;
// int *p1 = &i;
// *p1 = *p1 * *p1;

#include <iostream>

int main() {
  int i = 42;   // 定义一个整型变量，初始化为 42
  int *p1 = &i; // 定义一个 int 型指针 p1，指向变量 i

  std::cout << p1 << std::endl;
  std::cout << &i << std::endl;

  // 通过解引用符，让 p1 指向的对象相乘，并把值赋给 p1 指向的对象
  *p1 = *p1 * *p1;

  std::cout << p1 << std::endl;
  std::cout << *p1 << std::endl;

  return 0;
}

/*
>>> Execution Result:
0x7ffc301a076c
0x7ffc301a076c
0x7ffc301a076c
1764
 */
