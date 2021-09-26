// 练习2.9: 解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正。
// (a) std::cin >> int input_value;
// (b) int i = { 3.14 };
// (c) double salary = wage = 9999.99;
// (d) int i = 3.14;

#include <iostream>

int main() {
  // 必须先声明变量才能在语句中使用
  // std::cin >> int input_value;
  int input_value;
  std::cin >> input_value;
  std::cout << "Output: " << input_value << std::endl;

  // 使用列表初始化时，如果使用浮点数初始化 int 变量，编译器拒绝编译
  // int i = {3.14};

  // 在使用变量 wage 前未声明和初始化
  // double salary = wage = 9999.99;
  double wage = 9999.99;
  double salary = wage;
  std::cout << salary << std::endl;

  // 损失精度
  int i = 3.14;
  std::cout << i << std::endl;

  return 0;
}

/*
>>> Execution Result:
666
Output: 666
9999.99
3
 */
