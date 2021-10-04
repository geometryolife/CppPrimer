// 指针

#include <cstdlib>
#include <iostream>

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
void f9();

int main() {
  f1();
  f2();
  f3();
  f4();
  f5();
  f6();
  f7();
  f8();
  f9();

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
  std::cout << "*p: " << *p
            << std::endl; // 由符号 * 得到指针 p 所指的对象，输出 42

  *p = 0; // 由符号 * 得到指针 p 所指的对象，即可经由 p 为变量 ival 赋值
  std::cout << "*p: " << *p << std::endl; // 输出 0
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

// 空指针
void f6() {
  int *p1 = nullptr; // 等价于 int *p1 = 0;
  int *p2 = 0;       // 直接将 p2 初始化为字面常量 0
  // 需要首先 #include <cstdlib>
  int *p3 = NULL; // 等价于 int *p3 = 0;

  // int zero = 0;
  // pi = zero; // 错误: 不能把 int 变量直接赋给指针
}

// 赋值和指针
void f7() {
  int i = 42;
  int *pi = 0;   // pi 被初始化，但没有指向任何对象
  int *pi2 = &i; // pi2 被初始化，存有 i 的地址
  int *pi3; // 如果 pi3 定义于块内，则 pi3 的值是无法确定的

  pi3 = pi2; // pi3 和 pi2 指向同一个对象 i
  pi2 = 0;   // 现在 pi2 不指向任何对象了

  int ival = 30;
  std::cout << "f8:\n" << pi << std::endl;
  pi = &ival; // pi 的值被改变，现在 pi 指向了 ival
  *pi = 0;    // ival 的值被改变，指针 pi 并没有改变
  std::cout << "val: " << ival << std::endl;
}

// 其他指针操作
void f8() {
  int ival = 1024;
  int *pi = 0;      // pi 合法，是一个空指针
  int *pi2 = &ival; // pi2 是一个合法的指针，存放着 ival 的地址

  // if (pi) // pi 的值是 0，因此条件的值是 false
  // ...

  // if (pi2) // pi2 指向 ival，因此它的值不是 0，条件的值是 true
  // ...
}

// void* 指针
void f9() {
  double obj = 3.14, *pd = &obj;
  // 正确: void* 能存放任意类型对象的地址
  void *pv = &obj; // obj 可以是任意类型的对象
  pv = pd;         // pv 可以存放任意类型的指针
}

/*
>>> Execution Result:
*p: 42
*p: 0
f8:
0
val: 0
 */
