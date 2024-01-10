#include<stdio.h>
#include<math.h>
int main(){
    int x;
    int s;
    printf("Input X =   ");scanf("%d",&x);
    s = 1+x+pow(x,2)+pow(x,3);
    printf("Result  :    %d\n",s);
}