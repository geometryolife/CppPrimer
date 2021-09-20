// 将两个 Sales_item 对象相加的程序首先应该检查两个对象是否具有相同的 ISBN。

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item1, item2;

  std::cin >> item1 >> item2;
  // 首先检查 item1 和 item2 是否表示相同的书
  if (item1.isbn() == item2.isbn()) {
    std::cout << item1 + item2 << std::endl;
    return 0; // 表示成功
  } else {
    std::cerr << "Data must refer to same ISBN" << std::endl;
    return -1; // 表示失败
  }
}

/*
>>> Execution Result:
成功的返回值为0:
978-7-121-15535-2 5 128.00
978-7-121-15535-2 1 64
978-7-121-15535-2 6 704 117.333

[Process exited 0]

与成功的返回值不同:
978-7-121-15535-2 5 128.00
978-7-121-15535-1 2 56
Data must refer to same ISBN

[Process exited 255]
 */
