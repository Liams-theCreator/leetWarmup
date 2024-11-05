#include <stdio.h>

void f(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 97 && *c <= 122)
		*c -= 32;
}

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

int main(void)
{
	char str[] = "liamstheCreator";
	ft_striteri(str, f);

	printf("%s\n", str);

	return 0;
}
