//entering values in array without pointer
#include<stdio.h>
int main(){
    int n ;
    printf("no of Terms : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter No :");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("you entered : "); 
    for(int i = 0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}