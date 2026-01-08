// this code is adding the array using random functiomn as the randome value is genreted and we get sum of it 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define arr 10

int main(){

srand(time(0));
int sum = 0;
int array[arr];

//random value is assingned 
for(int i=0; i<arr; i++){
    array[i] = rand() % 100;
}

printf("Your random array is: \n");

//this loop print the value of random function
for(int i=0; i<arr; i++){
   printf("\n%d\n", array[i]);
   sum += array[i]; // this add the all the random function in the array  
}
// this statement print the sum of the array 
printf("sum is: %d", sum);

return 0;
}

// #include <stdio.h>

// int main(){
//     int arr[5];
//     int sum = 0;
    
//     for(int i=0; i<5; i++){
        
//         sum += i;
//         printf("%d",i);
//         printf("\n");
        
//     }
//     printf("sum is %d \n", sum);
//     return 0;
// }