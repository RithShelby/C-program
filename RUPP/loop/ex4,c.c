#include<stdio.h>
int main(){
	int i,f=1,n;
	printf("Input N : ");scanf("%d",&n);
	for(i=1;i<=n;i++){
		f = f*i;
		printf("f = %d\n",f,n);
	}
}
