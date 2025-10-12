//Basic knowledege about strings

#include<stdio.h>
int main(){
    char name[]="DEEPANSHU";
    char fullname[100];


    printf("Your name is : %s\n",name);
    printf("\n");


    printf("ENTER DETAILS : ");
    gets(fullname);
    puts(fullname);
    
    printf("\n");


    printf("ENTER FUllname : ");
    scanf("%s",fullname); //scanf does not recognise multiwords
    printf("Your full name is : %s\n",fullname);
     printf("\n");


    
    //to understand re-initialization
     char *str = "Hello VS ";
     puts(str);
     str="Hello";
     puts(str);
     printf("\n");


     
}