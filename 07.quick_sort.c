#include <stdio.h>
#include "io_utils.h"
#include <stdlib.h>
#include <time.h>

#define PLAYER_COUNT 50

// 练习一下C语言的快速排序
void SwapElements(int array[], int first, int second) {
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}

void ShuffleArray(int array[], int length) {
  srand(time(NULL));
  for (int i = length - 1; i > 0; --i) {
    int random_number = rand() % i;
    SwapElements(array, i, random_number);
  }
}

// 切分！！    trick : low
int Partition(int array[], int low, int high) {
  int partition = low;
  int pivot = array[high];
  for (int i = low; i < high; ++i) {
    if (array[i] < pivot) {
      SwapElements(array, i, partition++);
    }
  }
  SwapElements(array, partition, high);
  return partition;
}

void QuickSort(int array[], int low, int high) {
  if (low >= high) return;
  int partition = Partition(array, low, high);
  QuickSort(array, low, partition - 1);
  QuickSort(array, partition + 1, high);
}

int main(void) {
  int player[PLAYER_COUNT];
  for (int i = 0; i < PLAYER_COUNT; ++i) {
    player[i] = i;
  }

  ShuffleArray(player, PLAYER_COUNT);
  PRINT_INT_ARRAY(player, PLAYER_COUNT);

  QuickSort(player, 0, PLAYER_COUNT - 1);
  PRINT_INT_ARRAY(player, PLAYER_COUNT);
  return 0;
}
