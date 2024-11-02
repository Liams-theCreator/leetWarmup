#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *pstr = (unsigned const char *)s;
	unsigned char chr = (unsigned char)c;
	size_t len = 0;

	while (len < n)
	{
		if (*pstr == chr)
			return (void *)pstr;
		pstr++;
		len++;
	}
	return (void *)0;
}

int main(void)
{
	const char buff[] = "Liams the Creator";
	int chr = 'C';

	printf("%p\n", memchr(buff, chr, 16));
	printf("%p\n", ft_memchr(buff, chr, 16));
}
