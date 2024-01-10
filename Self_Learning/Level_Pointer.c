#include<stdio.h>
int main(){
    int x,y;
    int *p1,**p2,***p3;
    printf("Input X =  ");scanf("%d",&x);
    printf("Input Y =  ");scanf("%d",&y);
    p1=&x;
    p2=&p1;
    p3=&p2;
    printf("Pointer of P3 : %d\n",***p3);
    printf("Pointer of P2 : %d\n",**p2);
    printf("Pointer of P1 : %d\n",*p1);
    puts("=====================================");
    **p3=&y;
    printf("Pointer of [P1+P2+P3] = %d\n",*p1+**p2+***p3);
    printf("Pointer of [P1+P2-P3] = %d\n",*p1+**p2-***p3);
}