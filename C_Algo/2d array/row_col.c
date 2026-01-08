#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define height 10
#define width 10

int main (){

srand(time(0));
int arr[width][height];

for(int i=0; i<width; i++) {
    for(int j=0; j<height; j++) {
        arr[i][j] = rand() % 10;
    }
}

printf("your matrx is: \n");
for(int i=0; i<width; i++) {
    for(int j=0; j<height; j++) {
        if(i == 1&& j==0){
            printf("%d", i*j);
        }
    }
}

// figuring the logic is different to the code
    return 0;
}