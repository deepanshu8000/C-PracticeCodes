#include<stdio.h>
#include<string.h>
void salt(char pass[]);
int main(){
    char pass[100];
    printf("Enter value:");
    scanf("%s",&pass);
    salt(pass);
}
void salt(char pass[]){
    char namak[]="123";
    char newpass[200];
    strcpy(newpass,pass);
    strcat(newpass,namak);
    puts(newpass);
}