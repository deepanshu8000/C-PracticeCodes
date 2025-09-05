#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c>='0'  && c<='9')
    {
    printf( "%c is a digit")  ;
    }
    else{
        printf( "%c is not a digit")  ;
    }
    
}