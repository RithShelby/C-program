#include<stdio.h>
int main(){
	int n;
	printf("Input N : ");scanf("%d",&n);
	while(n>0){
		printf("%d",n%10);
		n = n/10;
	}
}
