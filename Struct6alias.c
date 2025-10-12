#include<stdio.h>
typedef struct CountryInfo
{
    char name[200];
    int states;
    float gdp;
}IND;

void info(IND s1);

int main(){
    IND c1={"INDIA",29,5.7};
    info(c1);

}
void info(IND s1){
    printf("Country is :%s\tTotal States :%d\tGDP is:%f",s1.name,s1.states,s1.gdp);


}