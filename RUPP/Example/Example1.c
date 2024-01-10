#include<stdio.h>
int main(){
    int seat,qty;
    int ticket = 7;
    char branch[20],movie[20],type[20],date[20];
    float price;
    puts("=======================MajorCineplix=========================");
    printf("Input Branch       :   ");scanf("%s",&branch);
    printf("Input Movie        :   ");scanf("%s",&movie);
    printf("Input Date         :   ");scanf("%s",&date);
    printf("Input type         :   ");scanf("%s",&type);
    printf("Input Seat         :   ");scanf("%d",&seat);fflush(stdin);
    printf("Input QTY of Ticket:   ");scanf("%d",&qty);
    price = ticket*qty;
    puts("========================YourTicket===========================");
    printf("Branch : %s\nMovie : %s\nDate : %s\nType : %s\nSeat : %d\nQTY : %d\nTicket : %d$\nPrice : %g$\n",branch,movie,date,type,seat,qty,ticket,price);
    puts("=========================ThankYou============================");
}