#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int i,n;
    puts("---------------------------");
    puts("\t\tCalloc");
    printf("Input N : ");scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Input Value of Ptr :  ");scanf("%d",(ptr+i));
    }
    puts("---------[OUTPUT]----------");
    for(i=0;i<n;i++){
        printf("Value of Ptr : %d\n",*(ptr+i));
    }
    puts("--------------------------------");
    puts("\t\tRealloc");
    int add;
    printf("Input More :  ");scanf("%d",&add);
    ptr = (int*)realloc(ptr,add*sizeof(int));
    for(i=0;i<n+add;i++){
        printf("Input Value of Ptr : ");scanf("%d",(ptr+i));
    } 
    n+=add;
    puts("----------[OUTPUT]-----------");
    for(i=0;i<n;i++){
        printf("Value of Ptr : %d\n",*(ptr+i));
    }
}