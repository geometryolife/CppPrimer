// 练习1.5: 我们将所有输出操作放在一条很长的语句中。重写程序，将
// 每个运算对象的打印操作放在一条独立的语句中。

#include <iostream>

int main() {
  int v1 = 0, v2 = 0;

  std::cout << "Enter two numbers:";
  std::cout << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The sum of ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 + v2;
  std::cout << std::endl;
}

/*
>>> Execution Result:
Enter two numbers:
3 5
The sum of 3 and 5 is 8
 */
