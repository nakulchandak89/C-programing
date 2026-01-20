// This code dedicates to find Max and Min in the array and for that this is the algo.
// Logic:- use the selaction sort and get the 0th and 4th index of an array by selaction sort we had sorted an array to assanding order.

#include<stdio.h>

// selection sort method to sort the array in assanding order
void min_max(int arr[], int n){
    int i, j, temp, minindex;

    for(i=0;i<n-1;i++){
        minindex = i;
    
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex = j;
        }
    }
    if(minindex != i){
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
    }
}


// geting the indices of an array 
void print(int arr[], int n){
    printf("Small number in an array is: %d\n\n", arr[0]);
    printf("Largest number in an array is:%d", arr[4]);

}

int main (){
    int arr[5];

    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter any 5 number: \n");
    
    for(int i=0; i<5;i++){
        scanf("%d", &arr[i]);
    }

    min_max(arr, n);
    
    print(arr, n);
    
    return 0;
}