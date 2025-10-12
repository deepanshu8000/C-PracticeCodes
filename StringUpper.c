#include<stdio.h>
#include<ctype.h>
void upper( char str[]);
int main(){
    char str[200];
    printf("ENTER CHARACTERS: ");
    fgets(str,200,stdin);
    upper(str);
    printf("upper case : %s",str);
    return 0;
}
void upper( char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'){
        str[i]=toupper(str[i]);
    }
}
}

