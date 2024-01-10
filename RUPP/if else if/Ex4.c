#include<stdio.h>
int main(){
    int a,b,c,max;
        printf("Input a : ");scanf("%d",&a);
        printf("Input b : ");scanf("%d",&b);
        printf("Input c : ");scanf("%d",&c);
        if(a>b)
            if(a>c)
            printf("Max : %d\n",a);
        else 
            if(b>c)
            printf("Max : %d\n",b);
            else
            printf("Max : %d",c);
}