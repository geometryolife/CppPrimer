// 练习1.23: 编写程序，读取多条销售记录，并统计
// 每个 ISBN (每本书) 有几条销售记录。

#include "../record/Sales_item.h"
#include <iostream>

int main() {
  Sales_item item, currItem;

  // 读入第一条交易记录，并确保有数据可以处理
  if (std::cin >> item) {
    int count = 1; // 如果有数据输入，保存销售记录条数，赋值为1

    while (std::cin >> currItem) { // 读入并处理剩余交易记录
      if (item.isbn() == currItem.isbn())
        count++; // 更新当前书籍的销售记录条数
      else {
        // 打印前一本书籍的结果
        std::cout << item.isbn() << " 的书有 " << count << " 条销售记录"
                  << std::endl;
        // item 现在表示下一本书的销售记录
        item = currItem;
        count = 1;
      }
    }
    // 打印最后一本书的结果
    std::cout << item.isbn() << " 的书有 " << count << " 条销售记录"
              << std::endl;
  } else {
    std::cout << "没有数据输入!" << std::endl;
  }

  return 0;
}

/*
>>> Execution Result:
使用重定向测试:
$ ./t23_count <../../data/book_sales.txt

0-201-70353-X 的书有 1 条销售记录
0-201-82470-1 的书有 1 条销售记录
0-201-88954-4 的书有 4 条销售记录
0-399-82477-1 的书有 2 条销售记录
0-201-78345-X 的书有 2 条销售记录

直接输入测试:
123 1 1
123 2 1
123 5 1
121 3 10
123 的书有 3 条销售记录
122 2 3
121 的书有 1 条销售记录
122 15 2
122 的书有 2 条销售记录
 */
