//to print fibonacci series
#include<stdio.h>
int fibonaa(int n){
    int a=0,b=1,c;
   
    for(int i=1;i<=n;++i){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }

}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    fibonaa(n);
    return 0;
}
