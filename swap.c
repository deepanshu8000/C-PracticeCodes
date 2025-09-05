#include <stdio.h>

void swap(int *a,int *b );

int main(){
    int a,b;
 printf("before swapping");
 scanf("%d%d",&a,&b);
    
    swap(&a,&b);
    printf(" after Swaping %d %d\n",a,b);
    return 0 ;

     
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
   
}
