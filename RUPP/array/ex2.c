#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,f=0,p=0; 
    float avg[10];
    float F[10],P[10];
    printf("Input Number of Student : ");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Input Average Student[%d] : ",i+1);scanf("%f",&avg[i]);
    }
    for(i=0;i<n;i++){
        if(avg[i]>=50){
            F[f++] = avg[i];
        print("Average Student Pass : %.2f\n",avg[i]);
    }else{
            P[p++] = avg[i];  
        printf("Average Student False : %.2f\n",avg[i]);
        }
    }
}