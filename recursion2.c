#include<stdio.h>
int factorial(int n){
    if (n==1)
    {
        return 1;
    }
    
    int factorialn1 =factorial(n-1);
    int factorialn =factorialn1*n;
}
int main(){
    printf("%d",factorial(5));
    return 0;
}