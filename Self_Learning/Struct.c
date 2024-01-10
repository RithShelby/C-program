#include<stdio.h>
struct Person{
    int id;
    char name[20];
    float salary;
    char sex;
}person1;
int main(){
    printf("Input ID     :  ");scanf("%d",&person1.id);
    printf("Input Name   :  ");scanf("%s",&person1.name);
    printf("Input Salary :  ");scanf("%f",&person1.salary);fflush(stdin);
    printf("Input Sex    :  ");scanf("%c",&person1.sex);
    puts("=================================================");
    printf("ID\tName\tSex\tSalary\n");
    puts("================================================");
    printf("%d\t%s\t%c\t%g $",person1.id,person1.name,person1.sex,person1.salary);
}
