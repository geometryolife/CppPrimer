// 练习2.18: 编写代码分别更改指针的值以及指针所指对象的值。

#include <iostream>

int main() {
  int val1 = 1, val2 = 10;
  int *p = &val1;

  std::cout << "指针 p 的值: " << p << std::endl;
  std::cout << "指针所指对象的值: " << val1 << std::endl;

  // 改变指针所指对象的值
  *p = 2;
  std::cout << "修改指针所指对象的值: " << val1 << std::endl;

  // 改变指针的值
  p = &val2;
  std::cout << "修改指针指向另一个地址(值): " << p << std::endl;

  return 0;
}

/*
>>> Execution Result:
指针 p 的值: 0x7ffc8596c3c8
指针所指对象的值: 1
修改指针所指对象的值: 2
修改指针指向另一个地址(值): 0x7ffc8596c3cc
 */
