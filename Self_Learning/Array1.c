#include<stdio.h>
int main(){
	int a[50],i,n,sum=0;
	printf("Input number of Array :  ");scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("[%d] Enter Value =  ",i+1);scanf("%d",&a[i]);
		sum += a[i];
	}
	for(i=0;i<n;i++){
		printf("%d",i+1);
	}
	printf("\nSum of Array Result :  %d",sum);
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("\nEven Number :  %d",a[i]);
		}else{
			printf("\nOdd number  : %d",a[i]);
		}
	}
}
