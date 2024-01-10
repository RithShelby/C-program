#include<stdio.h>
int name(){
    char class;
    printf("Input your name class  :   ");scanf("%c",&class);
    return name();
}
int subject(){
    char name_subject[20];
    printf("Input your subject     :      ");scanf("%s",&name_subject); 
    return subject();
}
int main(){
    printf("Class Name is %c\n",name());
    printf("Subject is %s\n",subject());
}