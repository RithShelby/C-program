#include<stdio.h>
#include<math.h>
int main(){
	int i,n=4;
	int s=0;
	for(i=3;i<=24;i*=2){
		s = s + pow(2,i-1)*3;
		printf(" \b %d + \b ",i);
	}
	
}
	
