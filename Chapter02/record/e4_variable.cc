// 变量定义

#include "../../Chapter01/record/Sales_item.h"
#include <iostream>

void f1();
void f2();
void f3();
void f4();

int main() {
  f1();
  f2();

  return 0;
}

void f1() {
  int sum = 0, value, // sum、value 和 units_sold 都是 int
      units_sold = 0; // sum 和 units_sold 初始值为 0
  Sales_item item;    // item 的类型是 Sales_item
  // string 是一种库类型，表示一个可变长的字符序列
  std::string book("0-201-78345-X"); // book 通过一个 string 字面值初始化
}

// 初始值
void f2() {
  // 正确: price 先被定义并赋值，随后被用于初始化 discount
  double price = 109.99, discount = price * 0.16;
  // 正确: 调用函数 applyDiscount，然后用函数的返回值初始化 salePrice
  // double salePrice = applyDiscount(price, discount);

  std::cout << price << '\n' << discount << std::endl;
}

// 列表初始化
void f3() {
  // C++ 定义了初始化的多种形式
  // int units_sold = 0;
  // int units_sold = {0};
  // int units_sold{0};
  // int units_sold(0);

  /*
    long double ld = 3.1415926536;
    int a{ld}, b = {ld}; // 错误: 转换未执行，因为存在丢失信息的危险
    int c(ld), d = ld; // 正确: 转换执行，且确实丢失了部分值
   */
}

// 默认初始化
void f4() {
  std::string empty; // empty 非显式地初始化为一个空串
  Sales_item item;   // 被默认初始化的 Sales_item 对象
}

/*
>>> Execution Result:
109.99
17.5984
 */
