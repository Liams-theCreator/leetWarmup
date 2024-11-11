#include "../libft.h"
#include <stdio.h>

int main(void)
{
    // Non-printable characters
    printf("TEST 1 ---> expected : 000000000000000000000000000000001111111111111111, got : ");
    for (int i = 0; i <= 47; i++)
        printf("%d", ft_isprint(i));
    printf("\n");

    // Digits
    printf("TEST 2 ---> expected : 1111111111, got : ");
    for (int i = '0'; i <= '9'; i++)
        printf("%d", ft_isprint(i));
    printf("\n");

    // Symbols
    printf("TEST 3 ---> expected : 1111111, got : ");
    for (int i = 58; i <= 64; i++)
        printf("%d", ft_isprint(i));
    printf("\n");

    // Uppercase alphabet
    printf("TEST 4 ---> expected : 11111111111111111111111111, got : ");
    for (int i = 'A'; i <= 'Z'; i++)
        printf("%d", ft_isprint(i));
    printf("\n");

    // Symbols
    printf("TEST 5 ---> expected : 111111, got : ");
    for (int i = 91; i <= 96; i++)
        printf("%d", ft_isprint(i));
    printf("\n");

    // Lowercase alphabet
    printf("TEST 6 ---> expected : 11111111111111111111111111, got : ");
    for (int i = 'a'; i <= 'z'; i++)
        printf("%d", ft_isprint(i));
    printf("\n");

    // Printable symbols
    printf("TEST 7 ---> expected : 11110, got : ");
    for (int i = 123; i <= 127; i++)
        printf("%d", ft_isprint(i));
    printf("\n");

    return 0;
}