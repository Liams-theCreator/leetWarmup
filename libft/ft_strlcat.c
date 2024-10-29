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
	size_t dstlen = ft_strlen(dst);
	size_t srclen = ft_strlen(src);
	size_t i = 0;

	if (size == 0 || size < dstlen)
		return size + srclen;
	while (i < size - dstlen - 1 && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return dstlen + srclen;
}
