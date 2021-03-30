#include <stdio.h>
#include "io_utils.h"

#define ARRAY_SIZE 10

int global_array[ARRAY_SIZE];

int main() {
  // index from 0!!!
  int array[ARRAY_SIZE];

  // initialize array by loop
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
    PRINT_INT(array[i]);
  }

  // initialize by list        初始化列表
  int array_2[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(array_2[i]);
  }

  // 默认补0
  double array_3[5] = {1.0, 2.3};
  for (int i = 0; i < 5; ++i) {
    PRINT_DOUBLE(array_3[i]);
  }

  // no initialize
//  int array_4[3];
//  for (int i = 0; i < 3; ++i) {
//    PRINT_INT(array_4[i]);   // gcc --> 0
//  }

  // char array    from C99
  char array_char[5] = {[2] = 'o', 'l', 'c'};
  for (int i = 0; i < 5; ++i) {
    PRINT_CHAR(array_char[i]);
  }

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(global_array[i]);
  }
  return 0;
}
