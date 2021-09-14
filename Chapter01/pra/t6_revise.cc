/*
练习1.6: 解释下面程序片段是否合法。
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
如果程序是合法的，它输出什么? 如果程序不合法，原因何在? 应该如何修正?
 */

#include <iostream>

int main() {
  int v1 = 0, v2 = 0;
  std::cout << "Enter two numbers:" << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
            << std::endl;
}

/*
最后两行缺少 ostream 对象，否则必须去掉第一第二句结尾的分号，使其
成为一条完整的表达式。
>>> Execution Result:
Enter two numbers:
6 9
The sum of 6 and 9 is 15
 */
