#include<stdio.h>
#include<math.h>
int main(){
    int i;
    int n = 4;
    int s =0;
    printf("S = ");
    for(i=3;i<=24;i*=2){
        s = s + pow(2,i)*3;
        printf("%d +",i);
    }
}