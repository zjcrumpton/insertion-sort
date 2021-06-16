#include <stdio.h>

void insertion_sort(int numbers[], int length)
{
  for (int i = 0; i < length; i++) {
    // access the number to be sorted
    int key = numbers[i];

    // access the number before the number to be sorted
    int nextIndex = i -1;

    // stop trying to find a place when the number at
    // nextIndex is less than the number being sorted
    // also stop if we hit the beginning of the array
    while(nextIndex > -1 && numbers[nextIndex] > key) {
      numbers[nextIndex + 1] = numbers[nextIndex];
      nextIndex = nextIndex - 1;
    }

    // insert the key into the sequence of numbers that has already
    // been sorted
    numbers[nextIndex + 1] = key;
  }
}

void print_array(int arr[], int length) {
  printf("[");
  for (int i = 0; i < length; i++) {
    printf(" %i, ", arr[i]);
  }
  printf("]\n");
}

int main(void)
{
  const int length = 20;
  int numbers[length] = { 22, 13, 12, 50, 1, 3, 55, 44, 9, 55, 2, 3, 1, 33, 60, 15, 13, 17, 20, 62 };

  printf("Array Before Insertion Sort:\n");
  print_array(numbers, length);

  insertion_sort(numbers, length);

  printf("\nArray After Insertion Sort:\n");
  print_array(numbers, length);

  return 0;
}