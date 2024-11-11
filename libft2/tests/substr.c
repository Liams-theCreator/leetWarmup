#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "lorem ipsum dolor sit amet";
    char *strsub;

    printf("TEST 1 ---> expected: 'lorem ipsu', got: ");
    strsub = ft_substr(str, 0, 10);
    if (strsub)
        printf("'%s'\n", strsub);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 2 ---> expected: 'psum dolor', got: ");
    strsub = ft_substr(str, 7, 10);
    if (strsub)
        printf("'%s'\n", strsub);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 3 ---> expected: '', got: ");
    strsub = ft_substr(str, 7, 0);
    if (strsub)
        printf("'%s'\n", strsub);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 4 ---> expected: '', got: ");
    strsub = ft_substr(str, 0, 0);
    if (strsub)
        printf("'%s'\n", strsub);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 5 ---> expected: NULL, got: ");
    strsub = ft_substr(str, 400, 20);
    if (strsub)
        printf("'%s'\n", strsub);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 6 ---> expected: NULL, got: ");
    strsub = ft_substr(NULL, 5, 10);
    if (strsub)
        printf("'%s'\n", strsub);
    else
        printf("NULL\n");

    return 0;
}
