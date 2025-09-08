//fibonacci series 0 1 1 2 3 5 sum of two previous term
#include<stdio.h>
    int fibonacci(int n){
        if (n==0)
        {
            return 0;
        }
        if (n==1){
            return 1;
        }
        
        int fibn1 = fibonacci(n-1);
        int fibn2 = fibonacci(n-2);
        int fibn = fibn1+fibn2;
        return fibn;
    }
    int main(){
    printf("%d\n",fibonacci(3));
    return 0;
    }
