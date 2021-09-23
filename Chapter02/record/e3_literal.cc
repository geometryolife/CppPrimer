// 字面值常量

#include <iostream>
#include <string>

void f1();
void f2();
void f3();

int main() {
  f1();
  std::cout << std::endl;
  f2();
  std::cout << std::endl;
  f3();

  return 0;
}

void f1() {
  int a = 20;   // 十进制
  int b = 024;  // 八进制
  int c = 0x14; // 十六进制
  int judge = 0;

  judge = (a == b && b == c);
  // 判断三个值是否相等
  if (judge == 1)
    std::cout << "Equal!" << std::endl;
}

void f2() {
  char a = 'a';                // 字符字面值
  char b[13] = "Hello World!"; // 字符串字面值

  std::cout << a << '\t' << b << std::endl;
  // 分多行书写的字符串字面值
  std::cout << "a really, really long string literal "
               "that spans two lines"
            << std::endl;
}

void f3() {
  std::cout << '\n';      // 转到新一行
  std::cout << "\tHi!\n"; // 输出一个制表符，输出"Hi!"，转到新一行
  std::cout << "Hi \x4dO\115!\n"; // 输出 Hi MOM!，转到新一行
  std::cout << '\115' << '\n';    // 输出 M，转到新一行
}

/*
>>> Execution Result:
Equal!

a       Hello World!
a really, really long string literal that spans two lines


        Hi!
Hi MOM!
M
 */
