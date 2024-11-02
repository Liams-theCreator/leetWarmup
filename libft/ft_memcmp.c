#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *ts1 = (unsigned const char *)s1;
	unsigned const char *ts2 = (unsigned const char *)s2;
	size_t i = 0;

	if (s1 == 0 || s2 == 0)
		return 0;
	while (i < n)
	{
		if (*ts1 != *ts2)
			return *ts1 - *ts2;
		i++;
		ts1++;
		ts2++;
	}
	return 0;
}

int main(void)
{
	char buff[] = "Healo";
	char buff2[] = "HeAlo";

	printf("libft    : %d\n", ft_memcmp(buff, buff2, 4));
	printf("original : %d\n", memcmp(buff, buff2, 4));
	return 0;
}
