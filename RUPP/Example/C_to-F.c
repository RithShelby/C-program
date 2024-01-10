#include<stdio.h>
#include<math.h>
int main(){
int c,f;
printf("Enter temperature in Celsius :    ");scanf("%d",&c);
f = (c*9/5) + 32;
printf("Temperature in Fahrenheit    :     %dF",f);
}