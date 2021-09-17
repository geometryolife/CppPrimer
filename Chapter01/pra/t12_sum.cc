// 练习1.12: 下面的 for 循环完成了什么功能? sum 的终值是多少?

#include <iostream>

int main() {
  int sum = 0;

  for (int i = -100; i <= 100; ++i)
    sum += i;
  std::cout << sum << std::endl;
}

/*
>>> Execution Result:
0
 */
