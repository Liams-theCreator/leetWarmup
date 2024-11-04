#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
	size_t srclen;
	size_t i = 0;

	srclen = ft_strlen(src);
	if (size == 0)
		return srclen;
	dstlen = ft_strlen(dst);
	if (dstlen < srclen)
		return size + srclen;
	while (i < size - dstlen - 1 && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return dstlen + srclen;
}

int main(void)
{
	size_t l = ft_strlcat(NULL, "HEllo", 0);
	printf("%ld", l);
	return 0;
}
