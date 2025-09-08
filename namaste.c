//to make a basic  function
#include<stdio.h>
void namaste(){
    printf("You are Indian\n");
}
void bonjour(){
    printf("You are French\n");
}
int main(){
    char ch;
    printf("Enter your language(I for indian & F for french): ");
    scanf("%c",&ch);
    if (ch== 'i')
    {
        namaste();
    }else{
        bonjour();
        }
    
    return 0;

}