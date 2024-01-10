#include<stdio.h>
int main(){
    int id,qty;
    float price,total;
    char name[20];
    puts("==============Input Product===============");
    printf("Input ID     :   ");scanf("%d",&id);fflush(stdin);
    printf("Input Name   :   ");gets(name);
    printf("Input Qty    :   ");scanf("%d",&qty);
    printf("Input Price  :   $");scanf("%f",&price);
    total = price*qty;
    puts("================OUTPUT====================");
    printf("ID :%d\t Name :%s\t QTY :%d\t Price :$%g\t Total :$%g",id,name,qty,price,total);
}