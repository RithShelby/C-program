#include<stdio.h>
void class(){
    int i,n;
    printf("Input N :  ");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("I love you\n",i); 
    }
}
void name(){
    char name[20];
    printf("Input Name :    ");scanf("%s",&name);
    printf("My name is %s!!!!",name);
}
int main(){
    class();
    name();
}