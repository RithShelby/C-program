#include <stdio.h>
int main()
{
    int i, j, n;
    int local;
    float price;
    printf("Input n of local : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Input Local : ");
        scanf("%d", &local);
        if (local > 200)
        {
            price = 8 + (100 * 0.06) + (local - 200) * 0.04;
        }
        else if (local > 100)
        {
            price = 8 + (local - 100) * 0.06;
        }
        else
        {
            price = 8;
        }
        printf("Price = %g $ \n", price);
    }
}