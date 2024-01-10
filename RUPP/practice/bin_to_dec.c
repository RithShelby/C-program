#include <stdio.h>
#include <math.h>
int main(){
	int dec = 0;
	long bin;
	int i = 0;
	printf("Input Binary : ");
	scanf("%ld", &bin);
	while (bin > 0){
		bin = bin/10;	
		dec = dec+(bin % 10)*pow(2,i);	
		i++;
	}
	printf("decimal : %d\n", dec);
}
