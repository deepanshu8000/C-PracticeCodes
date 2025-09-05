#include<stdio.h>
int main()
{
    char charcter;
    printf("enter a character:");
    scanf("%c",&charcter);
    if (charcter>='A'&& charcter<='Z')
    {
        printf("UPPERCASE\n");
    }
    else if (charcter>='a'&& charcter<='z')
    {
        printf("lower case\n");

    }
    else{
        printf("not alphabet");
    }
    
    
}