#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("File5int.txt","r");
    int a;
    for(int i=0;i<5;i++){
    fscanf(fptr,"%d",&a);
    printf("%d ",a);
    }
}