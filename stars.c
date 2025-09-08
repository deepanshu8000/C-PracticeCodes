//to draw patterns 
#include<stdio.h>
int main()
{
    int j,k;
    int num_lines = 5;
    int num_stars = 5;
    for (j = 0; j < num_lines; j++){
        for (k= 0;k < num_stars; k++)
        {
            printf("*");
        }
       printf("\n") ;
    }
    return 0;
}