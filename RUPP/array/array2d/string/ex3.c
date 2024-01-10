#include<stdio.h>
#include<string.h>
int main(){
    typedef char string[30];
    string result;
    float avg;
    printf("Input Avg : ");scanf("%f",&avg);
    if(avg<50){
        strcpy(result , "Failed");
    }else{
        strcpy(result , "Passed");
    }
    printf("Your Result is %s",result); 
}