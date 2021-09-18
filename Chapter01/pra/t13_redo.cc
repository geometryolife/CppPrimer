// 练习1.13: 使用 for 循环重做1.4.1节中的所有练习(第11页)。

#include <iostream>

void t9();
void t10();
void t11();

int main() {
  t9();
  t10();
  t11();

  return 0;
}

void t9() {
  int sum = 0;

  for (int val = 50; val <= 100; val++)
    sum += val;
  std::cout << "Sum of 50 to 100 includsive is " << sum << std::endl;
  std::cout << std::endl;
}

void t10() {
  for (int val = 10; val >= 0; val--)
    std::cout << val << "  ";
  std::cout << std::endl;
  std::cout << std::endl;
}

void t11() {
  int start = 0, end = 0;

  std::cout << "Please enter the start and end ranges:" << std::endl;
  std::cin >> start >> end;
  for (start = start; start <= end; start++)
    std::cout << start << "  ";
  std::cout << std::endl;
}

/*
>>> Execution Result:
Sum of 50 to 100 includsive is 3825

10  9  8  7  6  5  4  3  2  1  0

Please enter the start and end ranges:
12 15
12  13  14  15
 */
