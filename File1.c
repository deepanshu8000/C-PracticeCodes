#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("fil1.txt","r");
    if(fptr!=NULL){
        printf("FIle is readed successsfully");
        fclose(fptr);
    }
    else{
        printf("no file readed");
    }
}