// 练习1.21: 编写程序，读取两个 ISBN 相同的 Sales_item 对象，输出它们的和。

#include "../record/Sales_item.h"
#include <iostream>

int main() {
  Sales_item item1, item2;

  std::cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn())
    std::cout << item1 + item2 << std::endl;
  else
    std::cout << "两个 ISBN 号不相同!" << std::endl;

  return 0;
}

/*
>>> Execution Result:
978-7-121-15535-2 5 128.00
978-7-121-15535-2 1 64
978-7-121-15535-2 6 704 117.333

978-7-121-15535-2 3 15
978-7-121-15535-1 2 10
两个 ISBN 号不相同!
 */
