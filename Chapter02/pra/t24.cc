// 练习2.24: 在下面这段代码中为什么 p 合法而 lp 非法?
// int i = 42;
// void *p = &i;
// long *lp = &i;

#include <iostream>

int main() {
  int i = 42;
  void *p = &i;
  // long *lp = &i; // 类型不匹配

  std::cout << p << std::endl;
  // 不能直接操作 void* 指针所指的对象
  // std::cout << *p << std::endl;

  return 0;
}

/*
>>> Execution Result:
0x7ffd7d823f7c
 */
