//to find out string's length
#include<stdio.h>
int charlength(char arr[]);
int main(){
    char arr[100];
    fgets(arr,100,stdin);
    printf("Length is %d",charlength(arr));
}
int charlength(char arr[]){
    int count = 0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='\n'){
            break;
        }
        if(arr[i]=='\0'){
            continue;
        }
        count++;
       
    }
    return count;
}