#include<stdio.h>
#include<math.h>
int main(){
    int z,d,g,f;
    float e = 2.71;
    printf("Input D: ");scanf("%d",&d);
    printf("Input G: ");scanf("%d",&g);
    printf("Input F: ");scanf("%d",&f);
    z = pow(d,e)/(g-f)*(d/g*f);
    printf("So Z =  %d\n",z);
}