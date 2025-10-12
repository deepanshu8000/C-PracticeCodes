//Demonstration of realloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));

    printf("ENTER 5 numbers :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    realloc(ptr,8);
    printf("ENTER 8 numbers :");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t",ptr[i]);
    }
    
}