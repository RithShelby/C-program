#include<stdio.h>
void class(int a,int b);
void class1(int num);
void class2(int n);
int main(){  
    int a,b;
    int num,n;
    int op;
    do{
    puts("\n1.PGCD\t2. Factorial\t3.Primary number");
    printf("Choose Option : ");scanf("%d",&op);
    switch (op){
        case 1:{
            printf("=========PGCD=======\n");
            printf("Input A : ");scanf("%d",&a);
            printf("Input B : ");scanf("%d",&b);
            class(a,b);
        }break;
        case 2:{
            printf("========Factorial======\n");
            printf("Input Number ");scanf("%d",&num);
            class1(num);
        }break;
        case 3:{
            printf("========Primary number======\n");
            printf("Input Number :  ");scanf("%d",&n);
            class2(n);
        }break;
    }
    }while (op!=4);
}
void class(int a,int b){
     while (a!=b){
        if(a>b){
            a=a-b;
        }else{
            b = b-a;
            }
        }
    printf("Result %d ",a,b);
}
void class1(int num){
    int i;
    int x =1;
    if (num < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else{
        for (i = 1;i<= num;i++){
            x *= i;
        }
        printf("Factorial of [%d] = %d",num,x);
    }
}
void class2(int n){
    int j;
    j=2;
	while (n%j!=0){
		j++;
	}if(n==j){
			printf("Primary number %d",n);
		}else{
			printf("Non-Primary number %d",n);
		}
}
