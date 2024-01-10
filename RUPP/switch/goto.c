#include <stdio.h>
#include <conio.h>
void main()
{
    int line = 3;
    int item = 1, qty;
    char name[20];
    float price, amount, Total;
    puts("==========Sale Product==========");
    puts("   Items   Description     QTY    Price     Amount");
A:
    gotoxy(3, line);
    printf("%d", &item);
    gotoxy(12, line);
    fflush(stdin);
    gets(name);
    gotoxy(28, line);
    scanf("%d", &qty);
    gotoxy(36, line);
    scanf("%f", &price);
    amount = qty * price;
    gotoxy(46, line);
    printf("%6.2f", &amount);
    line++;
    item++;
    if (getch() == 13)
        goto A;
    getch();
}
