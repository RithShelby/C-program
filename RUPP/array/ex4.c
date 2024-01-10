#include<stdio.h>
#include<conio.h>
int main(){
    char pass[20] = "",ch;
    int i=0;
    printf("Input Password : ");
    do{
        ch = getch();
        if(ch!=13 && i>0){
            gotoxy(wherex()-2,wherey());
            printf("");
            pass[i] = ch;
            i++;
        }
    } while (ch!=13);
    printf("\nYour Password %s",pass);
}