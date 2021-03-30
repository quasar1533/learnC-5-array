#include <stdio.h>
#include "io_utils.h"

#define ARRAY_SIZE 5

//int main() {
//  int array[ARRAY_SIZE];
//  int array_with_expression[3 + 2];
//  PRINT_INT(array[0]);
//  PRINT_INT(array[5]);
//
//  int value = 2;
//
//  // ....
//  // C99, VLA; gcc OK; MSVC ERROR
//  int array_size_of_value[value];
//
//  const int kSize = 5; // C++ OK
//  int array_size_of_const[kSize]; // C99, VLA; gcc OK; MSVC ERROR
//
//  // array[5] => array + 5
//  return 0;
//}

int main() {
  int array[ARRAY_SIZE];
  // 在这里打开调试memory view查看一下啊， C语言非常自由灵活，array仅表示array的首地址，而array[5] 表示 array首地址 向后5个变量长度；  没有明确范围限制，编译器也不会报错！！！

  // 定义数组只期待常量  但gcc C99之后就可以支持   msvc ERROR
  int value = 3;
  // int array[1 + 4];     // 可行
  int array_size_of_value[value];   // 可行  称作VLA variable length array 变长数组
  // const 变量行为是一样的 因为在C语言中const变量只是只读变量
  // !!C++ 中的const则是真正的常量
  const int kSize = 3;
  int array_size_of_const[kSize];

  return 0;
}
