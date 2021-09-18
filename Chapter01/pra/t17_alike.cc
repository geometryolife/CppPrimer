// 练习1.17: 如果输入的所有值都是相等的，本节的程序会输出什么? 如果没有
// 重复值，输出又会是怎样的?

#include <iostream>

int main() {
  int val = 0, currVal = 0;

  // for (std::cin >> currVal;  ci)

  if (std::cin >> currVal) {
    int cnt = 1;
    for (; std::cin >> val;) {
      if (val == currVal)
        cnt++;
      else {
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }

  return 0;
}

/*
>>> Execution Result:
所有相等:
1 1 1 1 1
1 occurs 5 times

所有不相等:
1 2 3 4 5
1 occurs 1 times
2 occurs 1 times
3 occurs 1 times
4 occurs 1 times
5 occurs 1 times
 */
