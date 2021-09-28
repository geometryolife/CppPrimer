// 练习2.16: 考察下面的所有赋值然后回答: 哪些赋值是不合法的? 为什么?
// 哪些赋值是合法的? 它们执行了什么样的操作?
// int i = 0, &r1 = i;
// double d = 0, &r2 = d;
// (a) r2 = 3.14159;
// (b) r2 = r1;
// (c) i = r2;
// (d) r1 = d;

#include <iostream>

int main() {
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  r2 = 3.14159; // 把 3.14159 赋给 r2 指向的对象，此处即是赋值给 d
  std::cout << r2 << '\n' << d << std::endl;

  r2 = r1; // 把 r1 指向的对象的值赋给 r2 指向的对象，即把 i 的值赋给 d
  std::cout << r1 << '\n' << r2 << std::endl;

  i = r2; // 把 r2 指向的对象的值赋给 i，即把 d 的值赋给 i
  std::cout << r2 << '\n' << i << std::endl;

  r1 = d; // 把 b 的值赋给 r1 指向的对象，即把 d 的值赋给 i
  std::cout << d << '\n' << r1 << std::endl;

  return 0;
}

/*
>>> Execution Result:
3.14159
3.14159
0
0
0
0
0
0
 */
