// 练习2.10: 下列变量的初始值分别是什么?
/*
std::string global_str;
int global_int;

int main() {
  std::cout << global_str << std::endl;
  std::cout << global_int << std::endl;

  int local_int;
  std::string local_str;

  std::cout << local_int << std::endl;
  std::cout << local_str << std::endl;
 */

#include <iostream>

std::string global_str; // 空字符串
int global_int;         // 0

int main() {
  std::cout << global_str << std::endl;
  std::cout << global_int << std::endl;

  int local_int;         // 未定义
  std::string local_str; // 空字符串

  std::cout << local_int << std::endl;
  std::cout << local_str << std::endl;

  return 0;
}

/*
>>> Execution Result:

0
21932

 */
