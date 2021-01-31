#include "sort.h"
void bubble_sort(int size, int *arr) {
  int temp;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (int k = 0; k < size; k++) cout << arr[k] << endl;
  return;
}
