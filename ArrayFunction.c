//Arrays in function
#include<stdio.h>
void PrintArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
        int arr[6]={1,2,3,4,5,6};
        PrintArray(arr,6);
    }