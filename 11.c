//Sum from nth term  to 1 
#include<stdio.h>
int sum(int n){
   if(n==0){
        return 0;
   }
       
         else{
            return n + sum(n-1);
         }
    }
 

int main(){
    int a ;
    printf("Enter the number of terms: ");
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}


