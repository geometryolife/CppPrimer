// 练习2.3: 读程序写结果。
/*
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl << std::endl;

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;
 */

#include <iostream>

int main() {
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl << std::endl;

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;

  return 0;
}

/*
>>> Execution Result:
32
4294967264

32
-32
0
0
 */
