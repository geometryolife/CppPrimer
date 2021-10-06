// 练习2.21: 请解释下述定义，在这些定义中有非法的吗? 如果有，为什么?
// int i = 0;
// (a) double* dp = &i;
// (b) int *ip = i;
// (c) int *p = &i;

#include <iostream>

int main() {
  int i = 0;
  // double *dp = &i; // 不能 int 型对象的地址初始化 double 型指针
  // int *ip = i; // 不能用一个 int 型的值初始化 int 型指针
  int *p = &i;

  std::cout << p << std::endl;
  std::cout << *p << std::endl;

  return 0;
}

/*
(a)和(b)均犯了类型不匹配的错误
>>> Execution Result:
0x7ffd2722aebc
0
 */
