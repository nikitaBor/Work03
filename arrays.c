#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int arr[10];
    srand(time(NULL));
    int i;
    printf("the original array\n");

    for(i=0;i<9;i++){
        arr[i] = rand();
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    arr[9] = 0;
    printf("arr[%d]: %d\n", 9, arr[9]);

    int arr2[9];
    int *p = &arr[9];
    printf("the new array\n");
    for(i=0;i<10;i++){
        arr2[i] = *p; //dereference pointer to put value in for arr2
        p--;
        printf("arr2[%d]: %d\n", i, arr2[i]);
    }

}
