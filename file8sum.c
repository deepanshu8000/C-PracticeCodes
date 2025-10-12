#include<stdio.h>
int main(){
     FILE *ptr;
     ptr=fopen("file8.txt","r");

     int a;
     fscanf(ptr,"%d",&a);
     
     int b;
     fscanf(ptr,"%d",&b);
     fclose(ptr);

    ptr=fopen("file8.txt","w");
    int c=a+b;
    fprintf(ptr,"SUM IS %d",c);
    printf("SUM saved successfully in file");
    fclose(ptr);
}