#include <stdio.h>

size_t ft_strlen(const char *str)
{
	size_t len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen = ft_strlen(src);
	size_t i = 0;
	if (dstsize == 0)
		return srclen;
	if (dstsize > srclen)
	{
		while (*src != '\0')
		{
			*dst = *src;
			src++;
			dst++;
		}
		*dst = '\0';
	}
	else
	{
		while(i < dstsize - 1)
		{
			*dst = *src;
			i++;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return srclen;
}

void test_strlcpy()
{
    char dst[20];

    // Case 1: dstsize > srclen
    const char *src1 = "Hello";
    size_t result1 = ft_strlcpy(dst, src1, sizeof(dst));
    printf("Case 1: dstsize > srclen\n");
    printf("src: \"%s\", dstsize: %lu, result: %lu, dst: \"%s\"\n\n", src1, sizeof(dst), result1, dst);

    // Case 2: dstsize <= srclen
    const char *src2 = "Hello, World!";
    size_t result2 = ft_strlcpy(dst, src2, 6); // dstsize = 6, which is less than src2 length
    printf("Case 2: dstsize <= srclen\n");
    printf("src: \"%s\", dstsize: %d, result: %lu, dst: \"%s\"\n\n", src2, 6, result2, dst);

    // Case 3: dstsize = 0
    const char *src3 = "Hello, World!";
    size_t result3 = ft_strlcpy(dst, src3, 0); // dstsize = 0
    printf("Case 3: dstsize = 0\n");
    printf("src: \"%s\", dstsize: %d, result: %lu, dst: \"%s\"\n\n", src3, 0, result3, dst);

    // Case 4: Empty src
    const char *src4 = "";
    size_t result4 = ft_strlcpy(dst, src4, sizeof(dst));
    printf("Case 4: Empty src\n");
    printf("src: \"%s\", dstsize: %lu, result: %lu, dst: \"%s\"\n", src4, sizeof(dst), result4, dst);
}

int main() {
    test_strlcpy();
    return 0;
}
