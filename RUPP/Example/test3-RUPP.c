#include<stdio.h>
int main(){
    int id;
    float school_fee;
    char name[20],department[20],session[20];
    puts("===================Input Student Data===================");
    printf("Input ID                 :   ");scanf("%d",&id);fflush(stdin);
    printf("Input Student Name       :   ");gets(name);
    printf("Input Department         :   ");gets(department);
    printf("Input Session            :   ");gets(session);
    printf("Input School fee         :   $");scanf("%f",&school_fee);
    puts("=======================OUTPUT===============================");
    printf("ID :%d\t Name :%s\t Department :%s\t Session :%s\t SchoolFee :$%g",id,name,department,session,school_fee);
}