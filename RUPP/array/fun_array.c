#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,num[10];
    int o=0,e=0;
    int odd[10],even[10];
    printf("Input N for Number : ");scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Input Number :  ",i+1);scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        puts("Number");
        printf("%d\t",i+1,num[i]);
    }
    for(i=0;i<n;i++){
        if(num[i]%2!=0){
            odd[o++] = num[i];
            printf("Odd : %d\t",num[i]);
            
        }else{
            even[e++] = num[i];
            printf("Even : %d\t",num[i]);
            
        }
    }   
}