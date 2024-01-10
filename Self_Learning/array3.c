#include<stdio.h>
int main(){
    float arr[30];
    int i,n;
    printf("Input N (0-30) :   ");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("[%d] Enter Value of Arr :  ",i+1);scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[0] > arr[i])
        arr[0] = arr[i];   
    }
    printf("Smallest number : %g\n",arr[0]);
    for(i=0;i<n;i++){
        if(arr[0] < arr[i])
        arr[0] = arr[i];
    }
    printf("Largest Number  :  %g\n",arr[0]);
}