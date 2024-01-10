#include <stdio.h>
// In the super market has discount for customer :Discounted price = Original price - (Original price x Discount(%) / 100).
int main()
{
    float OriginalPrice, Discount, Discounted, payement;
    printf("Enter the Original Price : ");
    scanf("%f", &OriginalPrice);
    if (OriginalPrice < 200)
    {
        Discount = 1;
    }
    else if (OriginalPrice >= 200 && OriginalPrice < 500)
    {
        Discount = 2;
    }
    else if (OriginalPrice >= 500 && OriginalPrice < 1000)
    {
        Discount = 3;
    }
    else if (OriginalPrice >= 1000 && OriginalPrice < 1500)
    {
        Discount = 4;
    }
    else if (OriginalPrice > 1500)
    {
        Discount = 5;
    }
    puts("Heng Heng Super Market");
    printf("Original Price = %g $\n", OriginalPrice);
    printf("======= Discouted = %g $  =========\n ", Discounted = OriginalPrice - (OriginalPrice - (OriginalPrice * Discount) / 100));
    printf("       ======  Payment %g $  ==========\n", payement = OriginalPrice - Discounted);
}