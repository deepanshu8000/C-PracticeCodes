//Demonstration of malloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr=(float *)malloc(5*sizeof(float));
    for(int i=0;i<5;i++){
        printf("%d Number is :",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%.2f ",ptr[i]);
      
    }
}