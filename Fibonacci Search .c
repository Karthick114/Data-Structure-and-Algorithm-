#include <stdio.h>

int min(int, int);
int fibonacci_search(int[], int, int);

int min(int a, int b) {
    return (a > b) ? b : a;
}

int fibonacci_search(int arr[], int n, int key) {
    int offset = -1;
    int Fm2 = 0;
    int Fm1 = 1;
    int Fm = Fm2 + Fm1;

    while (Fm < n) {
        Fm2 = Fm1;
        Fm1 = Fm;
        Fm = Fm2 + Fm1;
    }

    while (Fm > 1) {
        int i = min(offset + Fm2, n - 1);
        if (arr[i] < key) {
            Fm = Fm1;
            Fm1 = Fm2;
            Fm2 = Fm - Fm1;
            offset = i;
        } else if (arr[i] > key) {
            Fm = Fm2;
            Fm1 = Fm1 - Fm2;
            Fm2 = Fm - Fm1;
        } else
            return i;
    }

    if (Fm1 && arr[offset + 1] == key)
        return offset + 1;

    return -1;
}

int main() {
    int n, key, pos;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    //  array elements as input
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the target element as input
    printf("Enter the target element to search: ");
    scanf("%d", &key);

    // Perform Fibonacci search
    pos = fibonacci_search(arr, n, key);

    if (pos >= 0)
        printf("The element is found at index %d\n", pos);
    else
        printf("Unsuccessful Search\n");

    return 0;
}
