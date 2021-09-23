// 练习2.8: 请利用转义序列编写一段程序，要求先输出 2M，然后转到新一行。
// 修改程序使其输出2，然后输出制表符，再输出 M，最后转到新一行。

#include <iostream>

int main() {
  std::cout << "2M" << '\n' << std::endl;
  std::cout << '2' << '\t' << 'M' << '\n' << std::endl;

  return 0;
}

/*
>>> Execution Result:
2M

2       M

 */
