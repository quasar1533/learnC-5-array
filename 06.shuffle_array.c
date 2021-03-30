#include <stdio.h>
#include "io_utils.h"
#include <stdlib.h>
#include <time.h>


// 实现一个随机顺序的数组的例子  运动员抽签
// 实现打乱顺序采用搞得基本算法思想是，每一次交换数组中一个随机位置和当前计数位置的数字
#define PLAYER_COUNT 50

void SwapElements(int array[], int first, int second) {
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}

void ShuffleArray(int array[], int length) {
  srand(time(NULL));
  for (int i = 0; i < length; ++i) {
    int random_number = rand() % length;
    SwapElements(array, i, random_number);
  }
}

// 上面的方法经常可能造成不必要的重复，效率也低一些  以下有更好的Shuffle方法
void ShuffleArrayPro(int array[], int length) {
  srand(time(NULL));
  for (int i = length - 1; i > 0; --i) {
    int random_number = rand() % i;
    SwapElements(array, i, random_number);
  }
}

int main() {
  int player[PLAYER_COUNT];
  for (int i = 0; i < PLAYER_COUNT; ++i) {
    player[i] = i;
  }
  PRINT_INT_ARRAY(player, PLAYER_COUNT);

  // shuffle
  ShuffleArrayPro(player, PLAYER_COUNT);
  PRINT_INT_ARRAY(player, PLAYER_COUNT);
  return 0;
}
