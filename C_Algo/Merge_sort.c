/*
Merge Sort is a divide-and-conquer algorithm used for sorting an array or list. 
It is one of the most efficient general-purpose sorting algorithms, 
with a time complexity of O(n log n). Here's a breakdown of how Merge Sort works
*/

#include <stdio.h>

void merge(int arr[], int left, int mid, int right){

    int n1 = mid - left  + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for(int i=0; i<n1; i++){
        L[i] = arr[left + i];
        }
        for(int j=0;j<n2;j++){
            R[j] = arr[mid + j + 1];
        }

        int i=0, j=0, k=left;

        while(i<n1&&j<n2){
            if(L[i]<R[j]){
                arr[k] = L[i];
                i++;
            }
            else{
            arr[k]= R[j];
            j++;
            }
            k++;
        }
        while(i<n1){
            arr[k] = L[i];
            i++;
            k++;
        }
        while(j<n2){
           arr[k]=R[j];
            j++;
            k++;
        
        }   
}

void sort_merge(int arr[], int left, int right){
    if (left < right){
        int mid = left + (right-left)/2;

        sort_merge(arr, left, mid);
        sort_merge(arr, mid+1, right);

        merge(arr, left, mid, right);
    }
}

void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main(){
int arr[8];
int size = 7;

printf("Enter your array: ");
for(int i=0; i<7; i++){
    scanf("%d", &arr[i]);
}

printf("You had enter this array and this is an orignal array\n");
printarr(arr, size);

sort_merge(arr, 0, size-1);

printf("now this is an sorted array by the method of mearge sort:\n");
    
printarr(arr, size);

return 0;
}

/*
#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    // Step 1: Left aur right subarrays ki size nikaalo
    int n1 = mid - left + 1;  // Left subarray ka size
    int n2 = right - mid;     // Right subarray ka size
    
    // Step 2: Temporary arrays banate hain jisme left aur right subarrays ko store karenge
    int L[n1], R[n2];  // L[] aur R[] ke naam se do temporary arrays banaye
    
    // Step 3: Left aur right subarrays ko copy karte hain temporary arrays L[] aur R[] mein
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];  // Left subarray ko L[] mein copy kar rahe hain
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];  // Right subarray ko R[] mein copy kar rahe hain
    }
    
    // Step 4: Ab dono temporary arrays ko merge karke final array mein dalte hain
    int i = 0, j = 0, k = left;  // i aur j L[] aur R[] ko traverse karenge, k main array ko
    while (i < n1 && j < n2) {   // Jab tak dono arrays mein elements hain
        if (L[i] <= R[j]) {  // Agar L[] ka element R[] ke element se chhota ya barabar hai
            arr[k] = L[i];    // L[] ka element main array mein daal do
            i++;              // L[] ko next element pe move karo
        } else {              // Agar R[] ka element chhota hai
            arr[k] = R[j];    // R[] ka element main array mein daal do
            j++;              // R[] ko next element pe move karo
        }
        k++;  // Main array ke next position pe move karo
    }
    
    // Step 5: Agar L[] mein koi elements bache hain, toh unhe copy karo
    while (i < n1) {
        arr[k] = L[i];  // L[] ka element main array mein daalna
        i++;            // L[] ko next element pe move karo
        k++;            // Main array ke next position pe move karo
    }

    // Step 6: Agar R[] mein koi elements bache hain, toh unhe copy karo
    while (j < n2) {
        arr[k] = R[j];  // R[] ka element main array mein daalna
        j++;            // R[] ko next element pe move karo
        k++;            // Main array ke next position pe move karo
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Mid point find kar rahe hain

        // Left aur right halves ko recursively sort karna
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Ab dono sorted halves ko merge karna
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);  // Original array ko print kar rahe hain

    mergeSort(arr, 0, size - 1);  // Merge Sort ko call kar rahe hain

    printf("Sorted array: \n");
    printArray(arr, size);  // Sorted array ko print kar rahe hain
    
    return 0;
}

*/

