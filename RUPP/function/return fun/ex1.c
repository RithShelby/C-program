#include<stdio.h>
int max(int,int);
int main(){
    int num1,num2;
                printf("Input A : ");scanf("%d",&num1);
                printf("Input B : ");scanf("%d",&num2);
                printf("Result : %d",max(num1,num2));
}
int max(int num1,int num2){
    int m;
    if(num1>num2){
        m = num1;
    }else{
        m = num2;
    }
    return m;
}
