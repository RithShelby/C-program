#include<stdio.h>
int main(){
    typedef char string[30];
    string name;
    // you can write other choice like this 
    // char name[30];
    printf("Input Name : ");gets(name);
    printf("Your name is %s",name);
}