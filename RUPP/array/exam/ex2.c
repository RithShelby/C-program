#include<stdio.h>
int main(){
    int a,b,c,sum;
    int Cpro,math,avg;
    int pay,dis,total;
    int i,n,s=0,num;
    int op;
    do{
        printf("1.Sum of Two Number\t2.Average of 2 Subject\t3.Payment Receipt\t4. S = 3+5+7+...+2n-1\n");
        printf("Choose Option [1->4]  : " );scanf("%d",&op);
        switch (op){
            case 1:{
                printf("Input A : ");scanf("%d",&a);
                printf("Input B : ");scanf("%d",&b);
                Summ(a,b);
            }break;
            case 2:{
                printf("Input Score C program : ");scanf("%d",&Cpro);
                printf("Input Score Math : ");scanf("%d",&math);
                averr(Cpro,math);
            }break;
            case 3:{
                printf("Enter payment amount: $");scanf("%d",&pay);
                    spendd(pay,dis,total);
            }break;
            case 4:{
                int s = 0;
                printf("Input Number : ");scanf("%d",&num);
                for(i=1;i<=num;i+=2){
                    s = s+i;
                    printf("%d + \b ",i);
                }
                printf("\b\b = %d",s);
                puts("");
                
            }break;
        }
    }while(op!=5);
}
int Summ(int a,int b){
    int sum;
    sum = a+b;
    printf("Sum = %d\n",sum);
}
int averr(int Cpro,int math){
    int avg;
    avg = (Cpro+math)/2;
    printf("Average : %d\n",avg);
}
int spendd(int pay,int dis,int total){
    if (pay >= 500){ 
        dis = pay * 0.50;
        total = pay - dis;
            printf("dis applied: %d \n", dis);
        }else{
        dis = 0.0;
            total = pay;
    }
    printf("Total without discount: %d$\n", pay);
    printf("Total with discount: %d$\n", total);
}