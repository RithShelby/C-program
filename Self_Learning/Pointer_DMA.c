#include<stdio.h>
#include<stdlib.h>
int main(){
    puts("----------------MALLOC--------------");
    int *ptr;
    ptr = (int*)malloc(sizeof(int)); //syntax !!! 
    printf("Input Value of ptr :  ");scanf("%d",ptr);
    printf("Value after Input :  %s\n",*ptr);
    
    
}