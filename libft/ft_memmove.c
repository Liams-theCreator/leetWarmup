#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *pdest = (unsigned char *)dest;
	unsigned char *psrc = (unsigned char *)src;
	size_t ln = n;

	if (dest == 0 || src == 0)
		return pdest;
	if (pdest >= psrc && pdest < (psrc + ln))
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
	return pdest;
}

int main(void)
{
	//char buf[12];
	char sr[] = "abcdef";

	printf("%s\n", sr);
	ft_memmove(sr, sr + 4, 4 * sizeof(char));
	printf("%s\n", sr);
}
