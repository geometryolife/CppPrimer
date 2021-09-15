// 练习1.11: 编写程序，提示用户输入两个整数，打印出这两个整数所指定的
// 范围内的所有整数。

#include <iostream>

int main() {
  int start, end;

  std::cout << "Please enter the start and end ranges:" << std::endl;
  std::cin >> start >> end;
  while (start <= end) {
    std::cout << start << "  ";
    start++;
  }
  std::cout << std::endl;

  return 0;
}

/*
>>> Execution Result:
Please enter the start and end ranges:
5 12
5  6  7  8  9  10  11  12
 */
