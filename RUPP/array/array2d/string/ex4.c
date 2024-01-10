#include<stdio.h>
#include<string.h>
int main(){
    typedef char string[30];
    string word1,word2;
    printf("Word1 : ");gets(word1);
    printf("Word2 : ");gets(word2);
    if(strcmp(word1,word2)==0){
        printf("%s is the same %s",word1,word2);
    }else if(strcmp(word1,word2)<0){
        printf("%s is < %s",word1,word2);
    }else{
        printf("%s is  > %s",word1,word2);
    }
}