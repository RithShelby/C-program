#include<stdio.h>
void swap(int &A,int &B){
	int t;
	
	printf("A : %d\n",A);
	printf("B : %d\n",B);
}
int main(){
	int a=5,b=20;
	swap(&a,&b);
	printf("Value of A : %d\n",a);
	printf("Value of B : %d\n",b);
}