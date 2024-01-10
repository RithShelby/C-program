#include<stdio.h>
int main(){
    int a,b;
    printf("Input A : ");scanf("%d",&a);
    printf("Input B : ");scanf("%d",&b);
    if(a==b)
    puts("If Condition");
    printf("%d = %d\n",a,b);
    else if(a>b)
    puts("Else if Condition");
    printf("%d > %d",a,b);
    else
    puts("Else condition");
    printf("%d < %d",a,b);
}