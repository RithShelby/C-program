#include<stdio.h>
int main(){
	int i,n=4;
	int s =0;
	for(i=3;i<9;i+=2){
		s = i+2;
		printf("%d + ",i);
	}
	printf("\b = %d",s);
}
