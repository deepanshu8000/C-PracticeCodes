//user input for DMA and free() 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    
    ptr=(int *)calloc(2,sizeof(int));
    for(int i=0;i<2;i++){
        printf("%d\n",ptr[i]);
}
}
