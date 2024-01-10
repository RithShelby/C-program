#include<stdio.h>
long power(int,int);
int main(){
    int a,n; 
    printf("Input A : ");scanf("%d",&a);
    printf("Input N : ");scanf("%d",&n);
    printf("Result : %ld",(a*power(a,n-1)),n);
}
long power(int a,int n){
    if(n==0)
    return 1;
    else
    return (a*power(a,n-1));
}