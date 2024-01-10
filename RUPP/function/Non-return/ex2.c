#include<stdio.h>
int main(){
    char name [20];
    char gender;
    printf("Input Name : ");scanf("%s",&name);fflush(stdin);
    printf("Input Gender : ");scanf("%c",&gender);
    Per(name,gender); // call function
}
void Per(char name[20],char gender){
    printf("Name : %s\n",name);
    printf("Gender : %c",gender);
}
