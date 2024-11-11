#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char dest[15];
    int ret;


    ft_memset(dest, 0, 15);
    printf("TEST 1 ---> expected: (lorem) copied length = 5, got: ");
    ret = ft_strlcpy(dest, "lorem", 15);
    printf("%d\n", ret);
    printf("Dest: '%s'\n", dest);

    printf("\n------------------------------------\n");

    ft_memset(dest, 0, 15);
    printf("TEST 2 ---> expected: () copied length = 0, got: ");
    ret = ft_strlcpy(dest, "", 15);
    printf("%d\n", ret);
    printf("Dest: '%s'\n", dest);

    printf("\n------------------------------------\n");

    ft_memset(dest, 0, 15);
    printf("TEST 3 ---> expected: (lo) copied length = 11, got: ");
    ret = ft_strlcpy(dest, "lorem ipsum", 3);
    printf("%d\n", ret);
    printf("Dest: '%s'\n", dest);

    printf("\n------------------------------------\n");

    ft_memset(dest, 0, 15);
    printf("TEST 4 ---> expected: (lorem ipsum do) copied length = 26, got: ");
    ret = ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15);
    printf("%d\n", ret);
    printf("Dest: '%s'\n", dest);

    printf("\n------------------------------------\n");
    
    ft_memset(dest, 0, 15);
    printf("TEST 5 ---> expected: (empty) copied length = 26, got: ");
    ret = ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0);
    printf("%d\n", ret);
    printf("Dest: '%s'\n", dest);

    return 0;
}
