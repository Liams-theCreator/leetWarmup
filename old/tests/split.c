#include "../libft.h"
#include <stdio.h>

int main(void)
{

    printf("TEST 1 ---> expected: NULL, got: ");
    char **test1 = ft_split("          ", ' ');
    if (!test1)
        printf("NULL\n");
    else
    {
        int i = 0;
        while (test1[i] != NULL)
        {
            printf("%s\n", test1[i]);
            i++;
        }
    }

    printf("\n------------------------------------\n");

    printf("TEST 2 ---> expected: words separated by space, got: ");
    char **test2 = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    if (!test2)
        printf("NULL\n");
    else
    {
        int i = 0;
        while (test2[i] != NULL)
        {
            printf("%s\n", test2[i]);
            i++;
        }
    }

    printf("\n------------------------------------\n");


    printf("TEST 3 ---> expected: words separated by space, got: ");
    char **test3 = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
    if (!test3)
        printf("NULL\n");
    else
    {
        int i = 0;
        while (test3[i] != NULL)
        {
            printf("%s\n", test3[i]);
            i++;
        }
    }

    printf("\n------------------------------------\n");

    printf("TEST 4 ---> expected: words split by 'i', got: ");
    char **test4 = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
    if (!test4)
        printf("NULL\n");
    else
    {
        int i = 0;
        while (test4[i] != NULL)
        {
            printf("%s\n", test4[i]);
            i++;
        }
    }

    printf("\n------------------------------------\n");

    printf("TEST 5 ---> expected: NULL or no words, got: ");
    char **test5 = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
    if (!test5)
        printf("NULL\n");
    else
    {
        int i = 0;
        while (test5[i] != NULL)
        {
            printf("%s\n", test5[i]);
            i++;
        }
    }
    
    printf("\n------------------------------------\n");

    printf("TEST 6 ---> expected: NULL or empty array, got: ");
    char **test6 = ft_split("", 'z');
    if (!test6)
        printf("NULL\n");
    else
    {
        if (!test6[0])
            printf("ok\n");
    }

    printf("\n------------------------------------\n");

    printf("TEST 7 ---> expected: segfault prevention, got: "); // false 
    char **test7 = ft_split(NULL, ' ');
    if (!test7)
        printf("NULL (no segmentation fault)\n");
    else
    {
        int i = 0;
        while (test7[i] != NULL)
        {
            printf("%s\n", test7[i]);
            i++;
        }
    }

    printf("\n------------------------------------\n");

    printf("TEST 8 ---> expected: full string as a single part, got: ");
    char **test8 = ft_split("Liams the Creator", '\0');
    if (!test8)
        printf("NULL\n");
    else
    {
        int i = 0;
        while (test8[i] != NULL)
        {
            printf("%s\n", test8[i]);
            i++;
        }
    }
    return 0;
}