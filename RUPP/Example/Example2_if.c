#include<stdio.h>
int main(){
    float average;
    printf("Input Average :  ");scanf("%f",&average);
    if(average>=50)
    printf("Your Score :%f\tCongratulation ! You Passed\n",average);
    if(average<50)
    printf("Your Score :%f\tPlease Try again!!You Failed",average);   
}