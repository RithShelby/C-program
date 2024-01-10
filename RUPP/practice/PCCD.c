#include<stdio.h>
int main(){
    int a,b;
    printf("Input A : ");scanf("%d",&a);
    printf("Input B : ");scanf("%d",&b);
    while (a!=b){

        if(a>b){
            a=a-b;
        }else{
            b = b-a;
        }   
    }
    printf("Result %d ",a,b);
}