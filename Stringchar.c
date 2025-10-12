#include<stdio.h>
void check(char str[],char present);
int main(){
    char str[200];
    printf("Enter String :");
    fgets(str,200,stdin);
    char present;
    printf("Enter the char to be find : ");
    scanf("%c",&present);
    check(str,present);
    return 0;
}
void check(char str[],char present){
    int found = 0;
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]== present){
            found++;
        }
    }
    if(found>0){
        printf("%c is present %d times in the string",present,found);
        }else{
        printf("%c is not present in the string",present);
        }
}