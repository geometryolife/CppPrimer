// 练习2.15: 下面的哪个定义是不合法的? 为什么?
// (a) int ival = 1.01;   // 合法，但会丢失部分值
// (b) int &rval1 = 1.01; // 不合法，j引用类型的初始值必须是一个对象
// (c) int &rval2 = ival; // 合法
// (d) int &rval3;        // 不合法，引用必须被初始化

#include <iostream>

int main() {
  int ival = 1.01;
  // int &rval1 = 1.01;
  int &rval2 = ival;
  // int &rval3;

  std::cout << ival << '\n' << rval2 << std::endl;

  return 0;
}

/*
>>> Execution Result:
1
1
 */
