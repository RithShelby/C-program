#include<stdio.h>
int main(){
    int a[20];
    int i,n;
    printf("Input Number of array :  ");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("[%d] Enter Value of array :  ",i+1);scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}