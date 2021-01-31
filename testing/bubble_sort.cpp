#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int size, int *arr) {
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

// int main() {
// int n, a[1000];  // 一共n个数，n不超过1000。a用来保存这些数
// cin >> n;
// 输入n个数
// for (int i = 0; i < n; i++) {
// cin >> a[i];
// }
// bubbleSort(n, a);
// return 0;
// }
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// int partition(int *arr, int start, int end) {
int partition(vector<int> arr, int start, int end) {
  int pivot = arr[end];
  int i = start;
  int j = end;
  while (i < j) {
    if (arr[i] > pivot) {
      swap(&arr[i], &arr[j]);
      cout << arr << endl;
      j--;
    } else {
      i++;
    }
  }
}