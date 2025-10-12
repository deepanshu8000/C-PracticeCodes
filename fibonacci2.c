//fibbonacci series by array
#include <stdio.h>

int main() {
    

    int arr[2][10];   

    
    for (int j = 0; j < 10; j++) {
        arr[0][j] = 2 * (j + 1);   
        arr[1][j] = 3 * (j + 1);   
    }

    printf("Table of 2:\n");
    for (int j = 0; j < 10; j++) {
        printf("%d ", arr[0][j]);
    }
    printf("\n");

    printf("Table of 3:\n");
    for (int j = 0; j < 10; j++) {
        printf("%d ", arr[1][j]);
    }
    printf("\n");

    return 0;
}
