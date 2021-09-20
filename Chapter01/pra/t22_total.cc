// 练习1.22: 编写程序，读取多个具有相同 ISBN 的销售记录，输出所有记录的和。

#include "../record/Sales_item.h"
#include <iostream>

int main() {
  Sales_item books, book;

  // 确保有数据输入，并且初始化 books 变量
  if (std::cin >> books) {
    while (std::cin >> book) {
      // 判断是否具有相同的 ISBN 号
      if (book.isbn() == books.isbn())
        books += book;
      else {
        // 提示当前输入的销售数据与第一次输入的销售数据的 ISBN 号不同
        std::cout << "Data must refer to same ISBN!" << std::endl;
      }
    }
    // 输入文件结束符后，将统计的结果输出
    std::cout << std::endl << books << std::endl;
  }

  return 0;
}

/*
>>> Execution Result:
x-101 2 5
x-101 1 3
x-102 2 4.5
Data must refer to same ISBN!
x-101 3 6

x-101 6 31 5.16667
 */
