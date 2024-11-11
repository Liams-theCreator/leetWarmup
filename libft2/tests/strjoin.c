#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char s1[] = "lorem ipsum";
    char s2[] = "dolor sit amet";
    char *strjoin;

    printf("TEST 1 ---> expected: 'lorem ipsumdolor sit amet', got: "); // false
    strjoin = ft_strjoin(s1, s2);
    if (strjoin)
        printf("'%s'\n", strjoin);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 2 ---> expected: 'dolor sit amet', got: "); // false
    s1[0] = '\0'; // Empty s1
    strjoin = ft_strjoin(s1, s2);
    if (strjoin)
        printf("'%s'\n", strjoin);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 3 ---> expected: 'lorem ipsum', got: "); // false
    s2[0] = '\0'; // Empty s2
    strjoin = ft_strjoin(s1, s2);
    if (strjoin)
        printf("'%s'\n", strjoin);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 4 ---> expected: '', got: ");
    s1[0] = '\0'; // Empty s1
    s2[0] = '\0'; // Empty s2
    strjoin = ft_strjoin(s1, s2);
    if (strjoin)
        printf("'%s'\n", strjoin);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 5 ---> expected: NULL, got: ");
    strjoin = ft_strjoin(NULL, s2);
    if (strjoin)
        printf("'%s'\n", strjoin);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 6 ---> expected: NULL, got: ");
    strjoin = ft_strjoin(s1, NULL);
    if (strjoin)
        printf("'%s'\n", strjoin);
    else
        printf("NULL\n");

    printf("\n------------------------------------\n");

    printf("TEST 7 ---> expected: NULL, got: ");
    strjoin = ft_strjoin(NULL, NULL);
    if (strjoin)
        printf("'%s'\n", strjoin);
    else
        printf("NULL\n");

    return 0;
}