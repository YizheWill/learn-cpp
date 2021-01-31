#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}
void bubble_sort(int start, int end, int *arr) {
  int i = start, j = end;
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    i = start;
    while (i < j - 1) {
      if (arr[i] > arr[i + 1]) {
        swap(&arr[i], &arr[i + 1]);
        sorted = false;
      }
      i++;
    }
  }
  return;
}
void print_arr(int size, int *arr) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << ' ';
  }
  return;
}
int main() {
  int arr[10];
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  int i = 0;
  int size = sizeof(arr) / sizeof(arr[0]);
  int j = size - 1;
  while (i <= j) {
    if (arr[i] % 2) {
      i++;
    } else if (!(arr[j] % 2)) {
      j--;
    } else if (!(arr[i] % 2) && !!(arr[j] % 2)) {
      swap(&arr[i], &arr[j]);
    }
  }
  bubble_sort(0, i, arr);
  bubble_sort(i, size, arr);
  print_arr(size, arr);

  return 0;
}
