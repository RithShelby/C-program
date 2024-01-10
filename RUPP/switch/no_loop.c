#include<stdio.h>
#include<math.h>
// Name : Chhun Natharith   Class : M3
int main(){
    int a,b,max,r,op;
    float x,area;
    puts("1. Maximum 2 number\t2. First Degree equation\t3. Area of Circle\n");
    printf("Choose option [1,2,3]   : ");scanf("%d",&op);
    switch (op){
        case 1:{
            puts("==================[1]======================");
            printf("Input A : ");scanf("%d",&a);
            printf("Input B : ");scanf("%d",&b);
            if(a>b){
                max = a;
                printf("Maximum : %d",max);
            }else{
                max = b;
                printf("Maximum : %d",max);
            }
        }break;
        case 2:{
            puts("===================[2]====================");
            printf("Input A : ");scanf("%d",&a);
            printf("Input B : ");scanf("%d",&b);
            if(a>0){
                x = -b/a;
                printf("X = %f",x);
            }else if(a<0){
                x = -b/a;
                printf("X = %f",x);
            }else{
                printf("No Root");
            }
        }break;
        case 3:{
            puts("===================[3]=====================");
            printf("Input R : ");scanf("%f",&r);
            area = (3.14)*r*r;
            printf("Area = %f",area);
        }break;
    }
}