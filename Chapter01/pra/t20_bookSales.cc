// 练习1.20: 在 GitHub 仓库里，第1章的代码目录中包含了头文件 Sales_item.h。
// https://github.com/geometryolife/CppPrimer/blob/main/Chapter01/record/Sales_item.h
// 将它拷贝到你自己的工作目录中。用它编写一个程序，读取一组书籍销售记录，将
// 每条记录打印到标准输出上。

#include "../record/Sales_item.h"
#include <iostream>

int main() {
  Sales_item books;

  while (std::cin >> books) {
    std::cout << books << std::endl;
  }

  return 0;
}

/*
借助操作系统的文件重定向功能，就能轻松实现
>>> Execution Result:
$ ./t20_bookSales <../../data/book_sales.txt

0-201-70353-X 4 99.96 24.99
0-201-82470-1 4 181.56 45.39
0-201-88954-4 2 30 15
0-201-88954-4 5 60 12
0-201-88954-4 7 84 12
0-201-88954-4 2 24 12
0-399-82477-1 2 90.78 45.39
0-399-82477-1 3 136.17 45.39
0-201-78345-X 3 60 20
0-201-78345-X 2 50 25
 */
