#include <stdio.h>

int main(){
    int id;
    float cpro,func,eng;
    char name[20],sex;
    puts("==================INPUT=========================");
    printf("Input your ID            :   ");scanf("%d",&id);
    printf("Input your cpro score    :   ");scanf("%f",&cpro);
    printf("Input your func score    :   ");scanf("%f",&func);
    printf("Input your eng score     :   ");scanf("%f",&eng);
    printf("Input your name          :   ");scanf("%s",&name);fflush(stdin);
    printf("Input your sex           :   ");scanf("%c",&sex);
    puts("==================OUTPUT=========================");
    printf("ID           :  %d\n",id);
    printf("Name         :  %s\n",name);
    printf("Sex          :  %c\n",sex);
    printf("Cpro Score   :  %f\n",cpro);
    printf("Func Score   :  %f\n",func);
    printf("Eng Score    :  %f",eng);
    return 0;
}