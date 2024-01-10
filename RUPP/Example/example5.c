#include<stdio.h>
int main(){
    int cm;
    float m,km;
    printf("Input length in Centimeter :  ");scanf("%d",&cm);
    m = cm/100;
    km =m/1000;
    printf("Length in Meter     :  %g\n",m);
    printf("Length in Kilometer :  %g\n",km);
}