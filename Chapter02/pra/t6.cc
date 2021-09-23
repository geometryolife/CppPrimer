// 练习2.6: 两组定义是否有区别，如果有，请叙述之:
// int month = 9, day = 7;
// int month = 09, day = 07;

/*
#include <iostream>

int main() {
  int month1 = 9, day1 = 7;
  int month2 = 09, day2 = 07;

  std::cout << month1 << '\t' << day1 << std::endl;
  std::cout << month2 << '\t' << day2 << std::endl;

  return 0;
}
 */

/*
>>> Execution Result:
第一组使用十进制数初始化变量，第二组使用八进制数初始化变量。
month2 处会报错，八进制数的取值范围为 0 ~ 7。
 */
