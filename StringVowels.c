//Count number of vowels in a string 

#include<stdio.h>
int vowels(char string[]);
int main(){
    char string[100];
    printf("Enter String Value :");
    fgets(string,100,stdin);
    int c = vowels(string);
    printf("%d",c);
}
int vowels(char string[]){
    int count =0;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'
            ||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
            count++;
        }
        
    }
    return count ;
}