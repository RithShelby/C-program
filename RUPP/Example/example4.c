#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Input B : ");scanf("%f",&b);
    printf("Input C : ");scanf("%f",&c);
    a = sqrt(pow(b,2)+pow(c,2))/(sqrt(pow(b,2)-pow(c,2)));
    printf("So A = %g",a);
}