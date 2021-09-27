// 练习2.14: 下面的程序合法吗? 如果合法，它将输出什么?
// int i = 100, sum = 0;
// for (int i = 0; i != 10; i++)

#include <iostream>

int main() {
  int i = 100, sum = 0;

  for (int i = 0; i != 10; ++i)
    sum += i;
  std::cout << i << " " << sum << std::endl;
}

/*
合法:
输出时使用的是全局作用域的变量 i，但是这跟程序的实际需求可能不符，
不应该在 for 循环中再次定义 i。
>>> Execution Result:
100 45
 */
