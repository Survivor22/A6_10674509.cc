#include <iostream>

void KyeiArray(int *array, int tee) {
  for (int k = 0; k < tee; ++k)
    std::cout << array[k] << " " << std::flush;
  std::cout << std::endl;
}

void BubbleSort(int *array, int tee) {
  bool swapped = true;
  int j = 0;
  int temp;

  while (swapped) {
    swapped = false;
    j++;
    for (int k = 0; k < tee - j; ++k) {
      if (array[k] > array[k + 1]) {
        temp = array[k];
        array[k] = array[k + 1];
        array[k + 1] = temp;
        swapped = true;
      }
    }
  }
}

int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int tee = sizeof(array)/sizeof(array[0]);

  std::cout << "Before Bubble Sort :" << std::endl;
  KyeiArray(array, tee);

  BubbleSort(array, tee);

  std::cout << "After Bubble Sort :" << std::endl;
  KyeiArray(array, tee);
  return (0);
}
