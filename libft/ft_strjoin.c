#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t len = 0;
	
	while (s[len] != '\0')
		len++;
	return len;
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen = ft_strlen(src);
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
	return srclen;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen = ft_strlen(dst);
	size_t srclen = ft_strlen(src);
	size_t i = 0;

	if (size == 0 || size < dstlen)
		return size + srclen;
	while (i < size - dstlen && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return dstlen + srclen;
}

char *ft_strjoin(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
		return 0;
	char *buffer;
	size_t len = ft_strlen(s1) + ft_strlen(s2);

	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return NULL;
	ft_strlcpy(buffer, s1, len);
	ft_strlcat(buffer, s2, len);
	return buffer;
}

int main(void)
{
	//const char s1[] = "";
	//const char s2[] = "";
	char *buf = ft_strjoin(NULL, NULL);
	if (buf == NULL)
		printf("error !");
	else
		printf("%s\n", buf);
	return 0;
}
