#include<stdio.h>
#include<conio.h>
int main(){
    A:
    int i,n; 
    float avg[10];
    printf("Input Number of Student : ");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Input Average Student[%d] : ",i+1);scanf("%f",&avg[i]);
    }
    for(i=0;i<n;i++){
        if(avg[i]>=50){
        printf("Average Student Pass : %.2f\n",avg[i]);
    }else{
        printf("Average Student False : %.2f\n",avg[i]);
        }
    }
    if(getch()==13)goto A; 
}