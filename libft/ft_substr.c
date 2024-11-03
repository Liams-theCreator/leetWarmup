#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i = 0;
	size_t idx = start;
	char *substr;

	substr = malloc(sizeof(char) * len);
	if (substr == NULL)
		return NULL;

	while (s[idx] != '\0' && i < len)
	{
		substr[i] = s[idx];
		i++;
		idx++;
	}
	substr[i] = '\0';
	return substr;
}

int main(void)
{
	char str[] = "Liams the Creator";

	printf("%s\n", ft_substr(str, 0, 5));

	return 0;
}
