#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        // min at correct position
        swap(&array[min_idx], &array[step]);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}


int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int data[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }

    selectionSort(data, size);
    printf("Sorted array in Ascending Order:\n");
    printArray(data, size);

    return 0;
}
