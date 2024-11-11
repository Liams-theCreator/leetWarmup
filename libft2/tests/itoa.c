#include "../libft.h"
#include <stdio.h>

int main(void)
{
    printf("TEST 1 ---> expected : 0 , got : ");
    char *res = ft_itoa(0);
    printf("%s\n", res);
    free(res);

    printf("TEST 2 ---> expected : 9 , got : ");
    res = ft_itoa(9);
    printf("%s\n", res);
    free(res);

    printf("TEST 3 --->  expected : -9 , got : ");
    res = ft_itoa(-9);
    printf("%s\n", res);
    free(res);

    printf("TEST 4 --->  expected : 10 , got : ");
    res = ft_itoa(10);
    printf("%s\n", res);
    free(res);

    printf("TEST 5 --->  expected : -10 , got : ");
    res = ft_itoa(-10);
    printf("%s\n", res);
    free(res);

    printf("TEST 6 --->  expected : 8124 , got : ");
    res = ft_itoa(8124);
    printf("%s\n", res);
    free(res);

    printf("TEST 7 --->  expected : -9874 , got : ");
    res = ft_itoa(-9874);
    printf("%s\n", res);
    free(res);

    printf("TEST 8 --->  expected : 543000 , got : ");
    res = ft_itoa(543000);
    printf("%s\n", res);
    free(res);

    printf("TEST 9 --->  expected : -2147483648 , got : "); // false
    res = ft_itoa(-2147483648LL);
    printf("%s\n", res);
    free(res);

    printf("TEST 10 ---> expected : 2147483647 , got : ");
    res = ft_itoa(2147483647);
    printf("%s\n", res);
    free(res);

    return 0;
}