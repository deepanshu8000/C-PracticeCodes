#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fptr;
    fptr=fopen("File9.txt","w");
    char str[200];
    printf("ENTER STRING :");
    fgets(str,sizeof(str),stdin);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
      char ch=tolower(str[i]);
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        count++;
      }
    }
    fprintf(fptr," VOWEL : %d",count);
    
    fclose(fptr);
    printf("File updated successfully with vowel count: %d\n", count);
}