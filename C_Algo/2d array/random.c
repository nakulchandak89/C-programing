#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // An array of integers
    int (*ptr)[5] = &arr;               // Pointer to the entire array

    // Displaying array elements using the pointer to array
    printf("Array elements accessed via pointer to array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*ptr)[i]);
    }
    printf("\n");

    // Display the address of the array and elements
    printf("Address of the entire array: %p\n", ptr);
    printf("Address of the first element: %p\n", &arr[0]);

    return 0;
}
