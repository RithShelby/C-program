#include<stdio.h>
void shop(int id,int qty,char name[20],float price,float total){
    puts("==================================================");
    printf("ID\tName\tQTY\tPrice\tTotal\n");
    printf("%d\t%s\t%d\t$%g\t$%g\n",id,name,qty,price,total);
    puts("================================================== ");
}
int main(){
    int id,qty;
    char name[20];
    float price,total;
    printf("Input ID           :  ");scanf("%d",&id);fflush(stdin);
    printf("Input Name Product :  ");scanf("%s",&name);
    printf("Input QTY          :  ");scanf("%d",&qty);
    printf("Input Price        :  $");scanf("%f",&price);
    total = price*qty;
    shop(id,qty,name,price,total);
}