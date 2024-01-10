#include<iostream>
using namespace std;
template <typename T>
T Sum(T a,T b){
	return a+b;
	return a-b;
    return a*b;
    return a/b;
    return a%b;
}
int main(){
	int a=1,b=1;
	 cout<<"Sum A+B : "<<Sum(a,b)<<endl;
	 cout<<"Sum A-B : "<<Sum(a,b)<<endl;
	 cout<<"Sum A*B : "<<Sum(a,b)<<endl;
	 cout<<"Sum A/B : "<<Sum(a,b)<<endl;
	 cout<<"Sum A%B : "<<Sum(a,b)<<endl;
}
