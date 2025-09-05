#include<stdio.h>
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int t;
    for(int i=10;i>=1;i--){
        t = n*i;
        printf("%d\n",t);
    }
    return 0; 
}