//storing elements in array using pointer
#include<stdio.h>
int main(){
    int arr[5];
    int *ptr=arr;
    for (int i=0;i<5;i++){
        printf("%d index ",i);
        scanf("%d",&arr[i]);
        ptr++;
    }
    printf("values :\n");
     for (int i=0;i<5;i++){
        printf("%d index %d\n",i,arr[i]);
}
}