// 书店程序:
// 从一个文件中读取销售记录，生成每本书的销售报告，显示售出册数、总销售
// 额和平均售价。

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item total; // 保存下一条交易记录的变量

  // 读入第一条交易记录，并确保有数据可以处理
  if (std::cin >> total) {
    Sales_item trans; // 保存和的变量
    // 读入并处理剩余交易记录
    while (std::cin >> trans) {
      // 如果我们仍在处理相同的书
      if (total.isbn() == trans.isbn())
        total += trans; // 更新总销售额
      else {
        // 打印前一本书的结果
        std::cout << total << std::endl;
        total = trans; // total 现在表示下一本书的销售额
      }
    }
    std::cout << total << std::endl; // 打印最后一本书的结果
  } else {
    // 没有输入! 警告读者
    std::cerr << "No data?!" << std::endl;
    return -1; // 表示失败
  }

  return 0;
}

/*
>>> Execution Result:
$ ./e10_bookstore <../../data/book_sales.txt

0-201-70353-X 4 99.96 24.99
0-201-82470-1 4 181.56 45.39
0-201-88954-4 16 198 12.375
0-399-82477-1 5 226.95 45.39
0-201-78345-X 5 110 22
 */
