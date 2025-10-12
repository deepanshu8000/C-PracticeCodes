//insert element  at the end of  array 
#include<stdio.h>
int main(){
    int arr[10];
    int n;
    printf("Enter how many values to be inserted currently:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int x;
    printf("Enter the values to be inserted: ");
    scanf("%d",&x);
    arr[n]=x;
    n++;
    for(int i=0;i<n;i++){
        printf("Array is : %d ",arr[i]);
    }
}