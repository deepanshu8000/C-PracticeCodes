#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("filestring.txt","r");
    char ch;
    ch=getc(fptr);
    while (ch!=EOF)
    {
    printf("%c",ch);
    ch=fgetc(fptr);
        
    }
    printf("\n");
    

    fclose(fptr);
    return 0;
}