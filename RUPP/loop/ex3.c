#include<stdio.h>
int main(){
	int i,n,s=0;
	printf("Input N : ");scanf("%d",&n);
	for(i=0;i<=n;i++){
		s = s+i;
		printf("%d + ",i);
	}
	printf("\b\b = %d",s);
}
