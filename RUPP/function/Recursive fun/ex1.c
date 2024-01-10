#include<stdio.h>
long facto(int);
int main(){
    int n;
    printf("Input N : ");scanf("%d",&n);
    printf("%ld ! = %ld",n,facto(n));
}
long facto(int n){
    if(n==0)
    return 1;
    else
    return(n*facto(n-1));
}