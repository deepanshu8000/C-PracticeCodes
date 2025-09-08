//Program to print table using function
#include<stdio.h>
//int sum(int a,int b){
    //return a+b ;}
    void print_table(int n){
        for(int i =1;i<=10;i++)
        {
            printf("%d\n",i*n);
        }
        
}
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    //int s =sum(a,b);
    print_table(n);
    return 0;
}