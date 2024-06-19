#include <stdio.h>

int linearSearch(int arr[], int a, int target) {
    for (int i = 0; i < a; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int a;
    printf("Enter the elements in the array: ");
    scanf("%d", &a);

    int arr[a];


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    
    printf("Enter the target element : ");
    scanf("%d", &target);

    int result = linearSearch(arr, a, target);

    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}
