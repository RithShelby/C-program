// S = 1!  + 2! + 3! +....+ N!
// Sum = n! + m!
#include<stdio.h>
long facto(int);
int main(){ 
    int op;
    int n,m;
    do{
       puts("1. S = 1! + 2! + 3! ...... +n!\t2. Sum = n! + m!\t3.Exit\n");
       printf("Choose option : ");scanf("%d",&op);
       switch (op){
       case 1:{
        int i;
        long s=0;
        printf("Input N : ");scanf("%d",&n);
        for(i=1;i<=n;i++){
            s = s+facto(i);
        }
        printf("S = %ld\n",s);
        }break;
        case 2:{
            printf("Input M : ");scanf("%d",&n);
            printf("Input N : ");scanf("%d",&m);
            printf("Sum = %ld\n",facto(n)+facto(m));
        }break;
       }
    }while (op!=3);   
}
long facto(int n){
    long f = 1;
    int i;
    for(i=1;i<=n;i++){
        f = f*i;
    }
    return f;
}