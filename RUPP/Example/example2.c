#include<stdio.h>
#include<math.h>
int main(){
    int b,c;
    float x,a;
    printf("Input A : ");scanf("%f",&a);
    printf("Input B : ");scanf("%d",&b);
    printf("Input C : ");scanf("%d",&c);
    //b>a>c
    x = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("X = %.2f",x);
}
