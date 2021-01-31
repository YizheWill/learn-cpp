#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}
void bubble_sort(int size, int *arr) {
  int i = 0, j = size;
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    i = 0;
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
    cout << arr[i] << endl;
  }
  return;
}
int main() {
  int n, a[1000];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bubble_sort(n, a);
  print_arr(n, a);
  return 0;
}