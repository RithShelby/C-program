#include<stdio.h>
#include<dos.h>
#include<string.h>
int main(){
    int i;
    char st[30];
    printf("Input String : ");gets(st);
    for(i=0;i<strlen(st);i++){
        printf("%c",st[i]);
        sleep(1);
    }
}