// 练习2.22: 假设 p 是一个 int 型指针，请说明下述代码的含义。
// if (p) // ...
// if (*p) // ...

#include <iostream>

int main() {
  int i = 0;
  int *p = &i;

  if (p) {
    std::cout << "p 指向一个对象!" << std::endl;
  } else {
    std::cout << "p 未指向一个对象!" << std::endl;
  }

  if (*p) {
    std::cout << "p 所指的对象的值不为零!" << std::endl;
  } else {
    std::cout << "p 所指的对象的值为零!" << std::endl;
  }

  return 0;
}

/*
>>> Execution Result:
p 指向一个对象!
p 所指的对象的值为零!
 */
