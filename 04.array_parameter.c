#include <stdio.h>
#include "io_utils.h"

#define LENGTH 10

// 学习传入函数的数组参数   传数组参数的关键信号及时传了首地址！！

int Sum(int array[LENGTH]) {
  int sum = 0;
  for (int i = 0; i < LENGTH; ++i) {
    sum += array[i];
  }
  return sum;
}

int SumPro(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}

int main() {
  // normal
  int array[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  PRINT_INT(Sum(array));

  // 关于变长数组的情况与处理
  int array_small[5] = {1, 2, 3, 4, 5};
  PRINT_INT(Sum(array_small));

  int array_big[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  PRINT_INT(Sum(array_big));

  // 声明数组开辟了一个首地址内存空间,根据初始化内容安排向后塞入内容
  int array_test[] = {1, 2, 3, 4};
  for (int i = 0; i < 4; ++i) {
    PRINT_INT(array_test[i]);
  }

  // 将数组的长度也作为参数传进来
  PRINT_INT(SumPro(array_big, 20));
  return 0;
}
