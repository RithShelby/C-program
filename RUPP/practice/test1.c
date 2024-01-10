#include<stdio.h>
#include<math.h>
int main(){
	int i,n=4;
	int s=0;
	for(i=3;i<=9;i+=2){
		s = s + (i*2 + 1);
		printf(" %d + \b",i);
	}
	printf("\b  = %d",s);
	
}