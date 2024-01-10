#include<stdio.h>
int main(){
    int id,qty;
    char name[20];
    float price,total,payment,discount;
    printf("Input ID    :   ");scanf("%d",&id);fflush(stdin);
    printf("Input Name  :   ");scanf("%s",&name);
    printf("Input price :   $");scanf("%f",&price);
    printf("Input QTY   :   ");scanf("%d",&qty);
    printf("Input Dis   :   ");scanf("%f",&discount);
    total = price*qty;
     if(total >= 20){
        payment = total -(total*10)/100;
    }if(total <= 30){
        payment = total -(total*15)/100;
    }else(total <=35);
        payment = total -(total*20)/100;
    puts("==========================================");
    printf("ID      : %d\n",id);
    printf("Name    : %s\n",name);
    printf("Price   : $%g\n",price);
    printf("QTY     : %d\n",qty);
    printf("Tax     : %g\n",discount);
    printf("Total   : $%g\n",total);
    printf("Payment : $%g\n",payment);
    
    
}