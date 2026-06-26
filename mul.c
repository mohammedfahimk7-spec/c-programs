#include <stdio.h>

int main(void)
{
    int num1, num2, product;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    product = num1 * num2;

    printf("Product is %d\n", product);

    return 0;
}