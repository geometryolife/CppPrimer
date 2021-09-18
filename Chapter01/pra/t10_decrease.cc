// 练习1.10: 除了++运算符将运算对象的值增加1之外，还有一个递减运算符(--)
// 实现将值减少1。编写程序，使用递减运算符在循环中按递减顺序打印出10到0之
// 间的整数。

#include <iostream>

int main() {
  int val = 10;

  while (val >= 0) {
    std::cout << val << "  ";
    val--;
  }
  std::cout << std::endl;

  return 0;
}

/*
>>> Execution Result:
10  9  8  7  6  5  4  3  2  1  0
 */
