#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("File7.txt","w");

    int n;
    printf("ENTER HOW MANY NUMBER YO WANT TO ENTER : ");
    scanf("%d",&n);

    int num[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&num[i]);
       
    }
    printf("Writing odd numbers to file...\n");
for(int i = 0;i<n;i++){
    if(num[i]%2!=0){
     fprintf(fptr,"%d ",num[i]);
    }
}
    
fclose(fptr);
printf("NUMBER WRITTEN IN FILE SUCCESFULLY");
}