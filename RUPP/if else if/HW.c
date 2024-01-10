#include<stdio.h>
    // playing in sport club
    // if you start before 2pm you have to pay 5000 in 1 hour.
    // if you start after 2pm you have to pay 8000 in 1 hour.
    // if you start after 6pm you have to pay 10000 in 1 hour.
    int main(){
        int st,et;
        float payment;
        printf("Input Start time : ");scanf("%d",&st);
        printf("Input End time   : ");scanf("%d",&et);
        (st<14 && et<=14)?payment = (et-st)*4000:(st>14 && et>14)?payment=(et-st)*8000:(st>14 && et >=18);payment =(et-st)*10000;
        printf("Payment : %g Riel",payment);
}