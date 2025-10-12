#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("fil1.txt","a+");
    char ch='A';
    fprintf(ptr,"%c",ch);
    putc('P',ptr);
    rewind(ptr);
    char c=getc(ptr);
    printf("READED : %c",c);
    fclose(ptr);
}