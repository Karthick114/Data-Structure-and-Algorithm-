#include <stdio.h>

void binary_search(int a[], int low, int high, int key) {
   int mid;
   mid = (low + high) / 2;
   if (low <= high) {
      if (a[mid] == key)
         printf("Element found at index: %d\n", mid);
      else if (key < a[mid])
         binary_search(a, low, mid - 1, key);
      else if (a[mid] < key)
         binary_search(a, mid + 1, high, key);
   } else if (low > high)
      printf("Unsuccessful Search\n");
}

int main() {
   int i, n, low, high, key;

   
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   int a[n];

   
   printf("Enter the elements of the array in sorted order:\n");
   for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }

   low = 0;
   high = n - 1;

   
   printf("Enter the target element to search: ");
   scanf("%d", &key);
   binary_search(a, low, high, key);

   // search for another element
   // printf("Enter another target element to search: ");
   // scanf("%d", &key);
   // binary_search(a, low, high, key);

   return 0;
}
