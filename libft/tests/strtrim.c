#include "../libft.h"
#include <stdio.h>

int main(void)
{
 
    printf("TEST 1 ---> expected: 'lorem ipsum', got: ");
    printf("'%s'\n", ft_strtrim("  lorem ipsum  ", " "));
    
    printf("\n------------------------------------\n");

    printf("TEST 2 ---> expected: 'lorem ipsum', got: ");
    printf("'%s'\n", ft_strtrim("teLorem ipsumte", "te"));

    printf("\n------------------------------------\n");

    printf("TEST 3 ---> expected: 'lorem ipsum dolor sit amet', got: ");
    printf("'%s'\n", ft_strtrim("iiLorem ipsum dolor sit ametii", "i"));

    printf("\n------------------------------------\n");

    printf("TEST 4 ---> expected: '', got: ");
    printf("'%s'\n", ft_strtrim("          ", " "));

    printf("\n------------------------------------\n");

    printf("TEST 5 ---> expected: 'hello', got: ");
    printf("'%s'\n", ft_strtrim("hello", " "));

    printf("\n------------------------------------\n");

    printf("TEST 6 ---> expected: 'hello', got: ");
    printf("'%s'\n", ft_strtrim("hello", " "));

    printf("\n------------------------------------\n");

    printf("TEST 7 ---> expected: NULL, got: ");
    char *result = ft_strtrim(NULL, " ");
    if (!result)
        printf("NULL\n");

    return 0;
}