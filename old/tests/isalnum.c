#include "../libft.h"
#include <stdio.h>

int main(void)
{
    // non alpha numeric
	printf("TEST 1 ---> expected : 000000000000000000000000000000000000000000000000, got : ");
	for (int i = 0; i <= 47; i++)
		printf("%d", ft_isalnum(i));
	printf("\n");

    // digits
	printf("TEST 2 ---> expected : 1111111111, got : ");
	for (int i = '0'; i <= '9'; i++)
		printf("%d", ft_isalnum(i));
	printf("\n");

    // non alpha numeric
	printf("TEST 3 ---> expected : 0000000, got : ");
	for (int i = 58; i <= 64; i++)
		printf("%d", ft_isalnum(i));
	printf("\n");

    // uppercase chars
	printf("TEST 4 ---> expected : 11111111111111111111111111, got : ");
	for (int i = 'A'; i <= 'Z'; i++)
		printf("%d", ft_isalnum(i));
	printf("\n");

    // non alpha numeric
	printf("TEST 5 ---> expected : 000000, got : ");
	for (int i = 91; i <= 96; i++)
		printf("%d", ft_isalnum(i));
	printf("\n");

    // lowercase chars
	printf("TEST 6 ---> expected : 11111111111111111111111111, got : ");
	for (int i = 'a'; i <= 'z'; i++)
		printf("%d", ft_isalnum(i));
	printf("\n");

    // non alpha numeric
	printf("TEST 7 ---> expected : 00000, got : ");
	for (int i = 123; i <= 127; i++)
		printf("%d", ft_isalnum(i));
	printf("\n");

	return 0;
}
