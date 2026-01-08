// printing the random matrix 2d.By random function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define width 9
#define height 8

int main (){
srand(time(0));
int arr[width][height];

for(int i = 0; i< width; i++) {
    for(int j = 0; j < height; j++) {
      arr[i][j] = rand() % 9;
    }
}
printf("random matrix is \n");
for(int i=0;i<width; i++) {
    for(int j=0; j<height; j++) {
        printf("%d \t", arr[i][j]);
    }
     printf("\n");
}

return 0;
}