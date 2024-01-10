#include<stdio.h>
int main(){
    int a,b,i,n;
    printf("Input N : ");scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Input A : ");scanf("%d",&a);
    printf("Input B : ");scanf("%d",&b);
    if(a>b)
    printf("%d > %d ",a,b);
    if(a<b)
    printf("%d < %d ",a,b);
    if(a==b)
    printf("%d = %d ",a,b);
    }
}