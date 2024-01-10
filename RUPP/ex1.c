#include<stdio.h>
#include<stdlib.h>
int main(){
	randomize();
	do{
		printf("%5d",rand(100));
	}while(!kbhit());
}