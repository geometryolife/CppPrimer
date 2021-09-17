// 读取数量不定的输入数据，求和

#include <iostream>

int main() {
  int sum = 0, value = 0;

  // 读取数据直到遇到文件尾，计算所有读入的值的和
  while (std::cin >> value)
    sum += value; // 等价于 sum = sum + value
  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}

/*
>>> Execution Result:
3 4 5 6
Sum is: 18
 */
