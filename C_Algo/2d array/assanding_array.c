// In this code I had sorted the array using the selaction sort Algorithms

#include <stdio.h>

void selaction(int n, int arr[]) {
    int i, j, minindex, temp;

    for(i = 0; i < n - 1; i++) {
        minindex = i;

        
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minindex]) {  
                minindex = j;
            }
        }

        
        if(minindex != i) {
            temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}

void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("input any 5 number: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
   
    printf("unsorted OG array");
    printarray(arr, n);

    
    selaction(n, arr);
    printf("Sorted array");
    printarray(arr, n);

    return 0;
}
