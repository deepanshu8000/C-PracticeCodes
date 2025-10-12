//using functins of strings

#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Deepanshu ";
    char str2[] = "DHAKAD ";

printf("length of string is : %d\n",strlen(str));

 strcpy(str,str2);
puts(str);

strcat(str,str2);
puts(str);

printf("%d",strcmp(str,str2));


}