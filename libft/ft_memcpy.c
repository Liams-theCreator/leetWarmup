#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char *dptr = (unsigned char *)dest;
	unsigned char *sptr = (unsigned char *)src;

	if (dest == 0 || src == 0)
		return dest;

	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return dest;
}

void prin(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char ds[13];
	char *dptr = ds;
	char sr[] = "Liams Tghams";
	int i = 0;
	printf("BEFORE :");
	prin(ds);
	ft_memcpy(ds, dptr, 13);
	printf("AFTER :");
	prin(ds);

}
