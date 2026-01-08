#include <stdio.h>
#include <time.h> // time lab is used for using teh random seed
#include <string.h>
#include <stdlib.h>

#define arr 10   // array is define for the random function


int main(){

int array[arr]; 
srand(time(0)); // this hear i inieate the random function inn  theh main function

// this loop feedthe value in the loop 
for(int i = 0; i<arr; i++){ 
    array[i] = rand() % 100;  
}

// this loop print the value of the loop which are randomly created
printf("Random Array: "); 
for(int i = 0; i<arr; i++){
    printf("%d \t", array[i]);
    printf(" \n");
}



    return 0;
}