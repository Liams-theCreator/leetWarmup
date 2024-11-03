#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i = 0;
	size_t j = 0;

	if (little[i] == '\0')
		return (char *)big;
	while (big[i] != '\0' || i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] != '\0' && i + j < len)
				j++;
			if (little[j] == '\0')
				return (char *)&big[i];
		}
		i++;
	}
	return (char *)0;
}

int main(void)
{
	char str[] = "Hello world";
	char fn[] = "";

	printf("%p\n", ft_strnstr(str, fn, 9));
	printf("%p\n", &str[0]);
	return 0;
}
