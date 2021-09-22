// 含有无符号类型的表达式

#include <iostream>

void f1();
void f2();
void f3();
void f4();
void f5();

int main() {
  f1();
  std::cout << std::endl;
  f2();
  std::cout << std::endl;
  f3();
  std::cout << std::endl;
  f4();
  std::cout << std::endl;
  f5();

  return 0;
}

void f1() {
  unsigned u = 10;
  int i = -42;

  std::cout << i + i << std::endl; // 输出 -84
  std::cout << u + i << std::endl; // 如果 int 占 32 位，输出 4294967264
}

void f2() {
  unsigned u1 = 42, u2 = 10;

  std::cout << u1 - u2 << std::endl; // 正确: 输出 32
  std::cout << u2 - u1 << std::endl; // 正确: 不过，结果是取模后的值
}

void f3() {
  for (int i = 10; i >= 0; --i)
    std::cout << i << std::endl;

  // 错误: 变量 u 永远也不会小于 0，循环条件一直成立
  /*
    for (unsigned u = 10; u >= 0; --u)
      std::cout << u << std::endl;
   */
}

void f4() {
  // 使用 while 解决无限循环的 Bug
  unsigned u = 11; // 确定要输出的最大数，从比它大 1 大数开始

  while (u > 0) {
    --u; // 先减1，这样最后一次迭代时就会输出 0
    std::cout << u << std::endl;
  }
}

void f5() {
  int a = -1, b = 1;
  unsigned c = 1;

  std::cout << a * b << std::endl;
  std::cout << a * c << std::endl;
}

/*
>>> Execution Result:
-84
4294967264

32
4294967264

10
9
8
7
6
5
4
3
2
1
0

10
9
8
7
6
5
4
3
2
1
0

-1
4294967295
 */
