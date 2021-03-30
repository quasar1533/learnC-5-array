#include <stdio.h>
#include "io_utils.h"
#include <wchar.h>

int main() {
  char string_0[11] = "Hello World";
  char string[12] = "Hello World";
  // 字符串数组长度可以不写，自动判定

  for (int i = 0; i < 11; ++i) {
    PRINT_CHAR(string[i]);
  }
  // short %hd
  // NULL \0
  PRINTLNF("%s", string_0);
  PRINTLNF("%s", string);

  char str_zh[] = "你好，中国！";
  PRINTLNF("%s", str_zh);

  // 宽字符  存的是Unicode码点
  wchar_t ws[] = L"你好，中国！";

  return 0;
}
