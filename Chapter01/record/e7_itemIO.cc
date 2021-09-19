// 从标准输入读入数据，存入一个 Sales_item 对象中，然后
// 将 Sales_item 的内容写回到标准输出:

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item book;

  // 读入 ISBN 号、售出的册数以及销售价格
  std::cin >> book;
  // 写入 ISBN 号、售出的册数、总销售额和平均价格
  std::cout << book << std::endl;

  return 0;
}

/*
>>> Execution Result:
0-201-70353-x 4 24.99
0-201-70353-x 4 99.96 24.99
 */
