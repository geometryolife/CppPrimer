// 练习2.25: 说明下列变量的类型和值。
// (a) int* ip, i, &r = i;
// (b) int i, *ip = 0;
// (c) int* ip, ip2;

#include <iostream>

void f1();
void f2();
void f3();

int main() {
  f1();
  f2();
  f3();

  return 0;
}

void f1() {
  // 定义一个 int 型指针 ip，一个 int 型变量 i，一个 int 型引用 i
  int *ip, i, &r = i;
}

void f2() {
  // 定义一个 int 型变量 i，一个 int 型指针 ip 并初始化其为空指针
  int i, *ip = 0;
}

void f3() {
  // 定义一个 int 型指针 ip 和一个 int 型变量 ip2
  int *ip, ip2;
}
