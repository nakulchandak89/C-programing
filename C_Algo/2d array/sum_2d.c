#include <stdio.h>
#include<stdlib.h>
#include <time.h>

#define height 10
#define width 10

int main(){

int arr[width][height];
srand(time(0));
int sum = 0; 

for(int i = 0; i < width; i++){
    for(int j = 0; j < height; j++){
        arr[i][j] = rand() % 10;
    }
}
printf("your matrix is: \n");
for(int i = 0; i < width; i++) {
    for(int j=0; j < height; j++){
        printf("%d \t", arr[i][j]);
        sum += i + j;
        
    }
    printf("\n");
}

printf("sum is: %d", sum);
    return 0;
}

