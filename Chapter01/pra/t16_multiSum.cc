// 练习1.16: 编写程序，从 cin 读取一组数，输出其和。

#include <iostream>

int main() {
  int sum = 0;

  for (int val = 0; std::cin >> val;)
    sum += val;
  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}

/*
>>> Execution Result:
1 3 5
Sum is: 9
 */
