// 理解复合类型的声明

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

// 定义多个变量
void f1() {
  // i 是一个 int 型的数，p 是一个 int 型指针，r 是一个 int 型引用
  int i = 1024, *p = &i, &r = i;

  // int* p; // 合法但是容易产生误导
  // int* p1, p2; // p1 是指向 int 的指针，p2 是 int

  // 法1:
  // int *p1, *p2; // p1 和 p2 都是指向 int 的指针
  // 法2:
  // int* p1; // p1 是指向 int 的指针
  // int* p2; // p2 是指向 int 的指针
}

// 指向指针的指针
void f2() {
  int ival = 1024;
  int *pi = &ival; // pi 指向一个 int 型的数
  int **ppi = &pi; // ppi 指向一个 int 型的指针

  std::cout << "The value of ival\n"
            << "direct value: " << ival << "\n"
            << "indirect value: " << *pi << "\n"
            << "doubly indirect value: " << **ppi << std::endl;
}

// 指向指针的引用
void f3() {
  int i = 42;
  int *p;      // p 是一个 int 型指针
  int *&r = p; // r 是一个对指针 p 的引用

  std::cout << '\n' << i << std::endl;
  r = &i; // r 引用了一个指针，因此给 r 赋值 &i 就是令 p 指向 i
  *r = 0; // 解引用 r 得到 i，也就是 p 指向的对象，将 i 的值改为 0
  std::cout << i << std::endl;
}

/*
>>> Execution Result:
The value of ival
direct value: 1024
indirect value: 1024
doubly indirect value: 1024

42
0
 */
