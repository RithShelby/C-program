#include<stdio.h>
int main(){
    int x[4];
    int i,n;
    printf("Input N :  ");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Input Value to X[%d] :  ",i);scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        printf("Address of (x+%d) = %p\n",i,(x+i)); //use %p to show adress without * !!!
        printf("Value of (x+%d) = %d\n",i,*(x+i)); // 
    }
}