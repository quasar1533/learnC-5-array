#include <stdio.h>
#include "io_utils.h"

// C语言的二维数组
// vla C99; gcc; msvc x  利用变长数组 顺序赋值

// C语言没法直接返回数组数据类型，返回的是指针，回销毁。因此用一些特殊的手段即可
void Sum(int rows, int columns, int array[][columns], int result[]) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i][j];
    }
  }
}

int main() {
  // initialize 2d array
  int array[5][2];
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      array[i][j] = i + j;
    }
  }
  // or
  int array_1[5][2] = {
    {0, 5},
    {1, 6},
    {2, 7},
    {3, 8},
    {4, 9},
  };
  // or even
  int array_3[5][2] = {
    0, 5, [1][0]=1, 6, 2, 7, 3, 8, 4, 9
  };
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      PRINT_INT(array_3[i][j]);
    }
  }

  // summation
  // initialize and reset
  int scores[5][4] = {
    {135, 135, 138, 277},
    {105, 134, 108, 265},
    {113, 107, 145, 232},
    {123, 99,  140, 227},
    {98,  118, 127, 242}
  };
  int result[5] = {0};  // reset
  Sum(5, 4, scores, result);
  PRINT_INT_ARRAY(result, 5);

  return 0;
}
