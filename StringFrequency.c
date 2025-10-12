//charcter with highest frrquency in string
#include<stdio.h>
int frequency(char str[]);
int main(){
   char  str[200];
   printf("ENTER STRING :");
   fgets(str,200,stdin);
   frequency(str);
}
int frequency(char str[]){
    int count=0;
    char final;
    int max=0;
    int freq[200]={0};
    for(int i=0;str[i]!='\0';i++ ){
        count=1;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>max){
         final=str[i];
         max=count;
        }
        }
        printf("Character with highest frequency is :%c\n",final);
        printf("No of times it occur:%d\n",max);
      
   
    }
  
