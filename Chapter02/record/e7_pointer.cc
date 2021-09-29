// 指针

#include <cstdlib>
#include <iostream>

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();

int main() {
  f1();
  f2();
  f3();
  f4();
  f5();
  f6();

  return 0;
}

void f1() {
  int *ip1, *ip2; // ip1 和 ip2 都是指向 int 型对象的指针
  double dp, *dp2; // dp2 是指向 double 型对象的指针，dp 是 double 型对象
}

// 取地址符 &
void f2() {
  int ival = 42;
  int *p = &ival; // p 存放变量 ival 的地址，或者说 p 是指向变量 ival 的指针
}

void f3() {
  double dval;
  double *pd = &dval; // 正确: 初始值是 double 型对象的地址
  double *pd2 = pd;   // 正确: 初始值是指向 double 对象的指针

  // int *pi = pd; // 错误: 指针 pi 的类型和 pd 的类型不匹配
  // pi = &dval; // 错误: 试图把 double 型对象的地址赋给 int 型指针
}

// 解引用符 *
void f4() {
  int ival = 42;
  int *p = &ival; // p 存放着变量 ival 的地址，或者说 p 是指向变量 ival 的指针
  std::cout << *p << std::endl; // 由符号 * 得到指针 p 所指的对象，输出 42

  *p = 0; // 由符号 * 得到指针 p 所指的对象，即可经由 p 为变量 ival 赋值
  std::cout << *p << std::endl; // 输出 0
}

// & 和 * 的多重含义
void f5() {
  int i = 42;
  int &r = i; // & 紧随类型名出现，因此是声明的一部分，r 是一个引用
  int *p; // * 紧随类型名出现，因此是声明的一部分，p 是一个指针
  p = &i;       // & 出现在表达式中，是一个取地址符
  *p = i;       // * 出现在表达式中，是一个解引用符
  int &r2 = *p; // & 是声明的一部分，* 是一个解引用符
}

void f6() {
  int *p1 = nullptr; // 等价于 int *p1 = 0;
  int *p2 = 0;       // 直接将 p2 初始化为字面常量 0
  // 需要首先 #include <cstdlib>
  int *p3 = NULL; // 等价于 int *p3 = 0;

  // int zero = 0;
  // pi = zero; // 错误: 不能把 int 变量直接赋给指针
}
