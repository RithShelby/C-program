#include<stdio.h>
int main(){
	int num;
	int i;
	printf("Input Number :  ");scanf("%d",&num);
	i=2;
	while (num%i!=0){
		i++;
	}if(num==i){
			printf("Primary number %d",num);
		}else{
			printf("Non-Primary number %d",num);
		}
	
}