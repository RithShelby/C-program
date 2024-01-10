#include<stdio.h>
int main(){
    int a,b;
    printf("Input A : ");scanf("%d",&a);
    printf("Input B : ");scanf("%d",&b);
    printf("Maximum : %d\n",a>b?a:b);
    (a>b)?printf("True"):printf("False");
}