#include<stdio.h>
int main(){
	int i;
	int s =0;
	for(i=2;i<=8;i+=2){
		s=s+i;
		printf("%d + \b",i);
	}
	printf("\b = %d",s);
}
