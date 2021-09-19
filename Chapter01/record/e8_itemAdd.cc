// Sales_item 对象的加法

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item1, item2;

  std::cin >> item1 >> item2;              // 读取一对交易记录
  std::cout << item1 + item2 << std::endl; // 打印他们的和

  return 0;
}

/*
>>> Execution Result:
0-201-78345-x 3 20.00
0-201-78345-x 2 25.00
0-201-78345-x 5 110 22
 */
