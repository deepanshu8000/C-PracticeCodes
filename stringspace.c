#include<stdio.h>
void space(char str[200]);
int main(){
    char str[200];
    printf("ENTER STRING:");
    fgets(str,200,stdin);
    space(str);
    printf("AFTER REMOVING SPACES: %s",str);
    return 0;

}
void space(char str[200]){
    char str2[200];
    int k=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[k]=str[i];
            k++;
        }
    }
    str[k]='\0';
}
 