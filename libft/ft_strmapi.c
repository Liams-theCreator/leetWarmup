#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

char f(unsigned int i, char c)
{
	(void)i;
	if (c >= 65 && c <= 90)
		return c += 32;
	return c;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	size_t j;
	size_t len;
	char *buffer;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return NULL;
	while (s[i] != '\0')
	{
		buffer[j] = f(i, s[i]);
		j++;
		i++;
	}
	buffer[j] = '\0';
	return buffer;
}

int main(void)
{
	const char str[] = "LIAMS THE CREATOR";
	char *new;

	new = ft_strmapi(str, f);
	printf("Before : %s\n", str);
	printf("After  : %s\n", new);
	return 0;
}
