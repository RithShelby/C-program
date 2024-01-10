#include<stdio.h>
int main(){
	// Program about salary of employee/month depend on commission . We know employee get 100$ per month!!
	float sale,comm,salary;
	
	printf("Input Sale : ");scanf("%d",&sale);
	if(sale<=200){
		comm =sale*0.5;
	}else if(sale<=300){
		comm = sale*0.8;
	}else if(sale<=500){
		comm = sale*0.12;
	}else{
		comm = sale*0.15;
	}
	printf("Salry : %g ",salary = 100 + comm);
}
