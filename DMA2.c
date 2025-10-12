//Demonstration of calloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        printf("Number at position %d is :",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("Number ENTERED at %d is %d\n",i+1,ptr[i]);
        
    }
}
