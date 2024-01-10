#include<stdio.h>
int main(){
    int a,b,m,n,p,op,c,d;
    float riel,dollar,average,x;
    do{
    	printf("1. Average of 2 number\t2.Maximum\t3.Positive number\t4.Exchange Money\t5.Back to 12 class");
    	printf("\nChoose Option Please : ");scanf("%d",&op);
    	switch(op){
    	case 1:{
    		printf("Input C: ");scanf("%d",&c);
    		printf("Input D: ");scanf("%d",&d);
			average = (c+d)/2;
			printf("Average of A and B : %f",average);
		}break;
		case 2:{
			printf("Input M  : ");scanf("%d",&m);
			printf("Input N  : ");scanf("%d",&n);
			printf("Input P  : ");scanf("%d",&p);
			if(m>n && m>p){
				printf(" %d is the biggest",m);
			}else if(n>m && n>p){
				printf(" %d is the biggest",n);
			}else{
				printf(" %d is the biggest",p);
			}
		}break;
		case 3:{
			printf("Input A : ");scanf("%d",&a);
			if(a>0){
				printf("A is Positive");
			}else{
				printf("A is Negative");
			}
		}break;
		case 4:{
			int pick;
			puts("Welcome to ABA");
			printf("Choose what you want : ");scanf("%d",&pick);
			switch(pick){
				case 1:{
					printf("Input Money in Riel : ");scanf("%f",&riel);
					dollar = riel/4000;
					printf("You Got %g $",dollar);
				}break;
				case 2 :{
					printf("Input Money in Dollar : ");scanf("%f",&dollar);
					riel = dollar*4000;
					printf("You Got %griel ",riel);
				}break;
			}	
		}break;
		case 5:{
			printf("Input A = ");scanf("%d",&a);
			printf("Input B = ");scanf("%d",&b);
			x=(-b)/a;
			if(a!=0){
				printf("X = %f",x);
			}else{
				printf("NULL!!!!!");
			}
		;	
		}break;
	}
}while(op!=6);
}
