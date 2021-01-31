#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

bool is_even(int num) { return num % 2 == 0; }

int main() {
  int a[10];
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  bool sorted = false;
  int i;
  while (!sorted) {
    sorted = true;
    i = 0;
    while (i < sizeof(a) / sizeof(a[0]) - 1) {
      if (is_even(a[i]) == is_even(a[i + 1]) && a[i] > a[i + 1] ||
          is_even(a[i]) && !is_even(a[i + 1])) {
        swap(&a[i], &a[i + 1]);
        sorted = false;
      }
      i++;
    }
  }
  for (int i = 0; i < 10; i++) {
    cout << a[i] << ' ';
  }
  return 0;
}