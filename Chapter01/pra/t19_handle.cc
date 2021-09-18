// 练习1.19: 修改你为1.4.1节练习1.11(第11页)所编写的程序(打印一个范围
// 内的数)，使其能处理用户输入的第一个数比第二个数小的情况。

#include <iostream>

int main() {
  int start = 0, end = 0;
  std::cout << "Please enter the atart and end ranges:" << std::endl;
  std::cin >> start >> end;
  if (start < end) {
    while (start <= end) {
      std::cout << start << "  ";
      start++;
    }
  } else {
    while (start >= end) {
      std::cout << start << "  ";
      start--;
    }
  }
  std::cout << std::endl;

  return 0;
}

/*
>>> Execution Result:
Please enter the atart and end ranges:
1 12
1  2  3  4  5  6  7  8  9  10  11  12

Please enter the atart and end ranges:
-3 5
-3  -2  -1  0  1  2  3  4  5

Please enter the atart and end ranges:
10 5
10  9  8  7  6  5

Please enter the atart and end ranges:
5 -5
5  4  3  2  1  0  -1  -2  -3  -4  -5
 */
