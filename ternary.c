#include <stdio.h>
int main(){
    int a,b;
    
    printf("enter a and b : ");
    scanf("%d%d",&a,&b);
    a<b?printf("smallest is %d\n",a):a==b?printf("both are equal\n"):printf("smallest is %d\n",b);


}