// 统计在输入中每个值连续出现了多少次

#include <iostream>

int main() {
  // currVal 是我们正在统计的数；我们将读入的新值存入 val
  int currVal = 0, val = 0;
  // 读取第一个数，并确保确实有数据可以处理
  if (std::cin >> currVal) {
    int cnt = 1;              // 保存我们正在处理的当前值的个数
    while (std::cin >> val) { // 读取剩余的数
      if (val == currVal)     // 如果值相同
        ++cnt;                // 将 cnt 加1
      else {                  // 否则，打印前一个值的个数
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val; // 记住新值
        cnt = 1;       // 重置计数器
      }
    } // while 循环在这里结束
      // 记住打印文件中最后一个值的个数
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  } // 最外层的 if 语句在这里结束

  return 0;
}

/*
>>> Execution Result:
第一次测试:
1 1 2 2 2 2 2 3 3 3 5 5
1 occurs 2 times
2 occurs 5 times
3 occurs 3 times
5 occurs 2 times

第二次测试:
42 42 42 42 42 55 55 62 100 100 100
42 occurs 5 times
55 occurs 2 times
62 occurs 1 times
1 2 3 4 5
100 occurs 3 times
1 occurs 1 times
2 occurs 1 times
3 occurs 1 times
4 occurs 1 times
5 occurs 1 times

第三次测试:
1 1 1 1 1
1 occurs 5 times

第四次测试:
1 2 3 4 5
1 occurs 1 times
2 occurs 1 times
3 occurs 1 times
4 occurs 1 times
5 occurs 1 times
 */
