#include<stdio.h>
#include<stdlib.h>
int main(){
    puts("---------------CALLOC----------------");
    int n,i,*ptr,sum=0;
    printf("Enter number of Element :  ");scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++){
            printf("Enter element of array :  ");scanf("%d",ptr+i);
            sum += *(ptr+i);
        }
    printf("Sum = %d",sum);
    free(ptr)  ;
}