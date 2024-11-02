#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *pdest = (unsigned char *)dest;
	unsigned char *psrc = (unsigned char *)src;
	size_t ln = n;

	if (dest == 0 || src == 0)
		return dest;
	if (pdest >= psrc && pdest < (psrc + ln ))
	{
		while (ln > 0)
		{
			pdest[ln - 1] = psrc[ln - 1];
			ln--;
		}
	}
	else
	{
		ln = 0;
		while (ln < n)
		{
			pdest[ln] = psrc[ln];
			ln++;
		}
	}
	return dest;
}


void compare_memmove() {
    // Test case 1: No overlap
    char test1[] = "Hello, World!";
    char test2[] = "Hello, World!"; // Make a copy for original memmove

    printf("Before ft_memmove (no overlap): %s\n", test1);
    ft_memmove(test1 + 7, test1, 6); // Move "Hello," to position 7
    printf("After ft_memmove: %s\n", test1);

    printf("Before original memmove (no overlap): %s\n", test2);
    memmove(test2 + 7, test2, 6); // Move "Hello," to position 7
    printf("After original memmove: %s\n", test2);
    printf("\n");

    // Test case 2: Safe overlap
    char overlap_safe1[] = "123456";
    char overlap_safe2[] = "123456"; // Make a copy for original memmove

    printf("Before ft_memmove (safe overlap): %s\n", overlap_safe1);
    ft_memmove(overlap_safe1 + 2, overlap_safe1, 4); // Move "1234" to "234"
    printf("After ft_memmove: %s\n", overlap_safe1);

    printf("Before original memmove (safe overlap): %s\n", overlap_safe2);
    memmove(overlap_safe2 + 2, overlap_safe2, 4); // Move "1234" to "234"
    printf("After original memmove: %s\n", overlap_safe2);
    printf("\n");

    // Test case 3: Unsafe overlap
    char overlap_unsafe1[] = "ABCDEFGH";
    char overlap_unsafe2[] = "ABCDEFGH"; // Make a copy for original memmove

    printf("Before ft_memmove (unsafe overlap): %s\n", overlap_unsafe1);
    ft_memmove(overlap_unsafe1, overlap_unsafe1 + 2, 6); // Move "CDEFGH" to start
    printf("After ft_memmove: %s\n", overlap_unsafe1);

    printf("Before original memmove (unsafe overlap): %s\n", overlap_unsafe2);
    memmove(overlap_unsafe2, overlap_unsafe2 + 2, 6); // Move "CDEFGH" to start
    printf("After original memmove: %s\n", overlap_unsafe2);
}

int main(void) {
    compare_memmove();
    return 0;
}
