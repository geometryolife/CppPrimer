// 使用 while 循环，求1到10这10个数之和

#include <iostream>

int main() {
  int sum = 0, val = 1;

  // 只要 val 的值小于等于10，while 循环就会持续执行
  while (val <= 10) {
    sum += val; // 将 sum + val 赋予 sum
    ++val;      // 将 val 加1
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

  return 0;
}

/*
>>> Execution Result:
Sum of 1 to 10 inclusive is 55
 */
