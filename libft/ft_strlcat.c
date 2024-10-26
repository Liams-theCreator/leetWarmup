#include <stdio.h>

size_t ft_strlen(char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen = ft_strlen(dst);
	size_t srclen = ft_strlen((char *)src);
	size_t totallen = dstlen + srclen;
	int i = 0;

	if (size <= 0 || size < totallen)
		return totallen;
	while (dstlen < totallen && src[i] != '\0')
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return totallen;
}

int main(void)
{
	char dst[] = "Hello";
	char src[] = "Linux";
	size_t size = 15;
	size_t ret = ft_strlcat(dst, src, size);
	if (ret > size)
	{
		printf("failed :\n");
		printf("%s\n", dst);
	}
	else
	{
		printf("succed :\n");
		printf("%s\n", dst);
	}
}
