#include <stdio.h>
#include <stdlib.h>

size_t ft_compare(char chr, char const *set)
{
	size_t i = 0;

	while (set[i] != '\0')
	{
		if (set[i] == chr)
			return 1;
		i++;
	}
	return 0;
}

size_t ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
		len++;
	
	return len;
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t len;
	size_t start;
	size_t i;
	char *buff;

	start = 0;
	i = 0;
	len = ft_strlen(s1) - 1;
	while (ft_compare(s1[start], set) == 1)
		start++;
	while (ft_compare(s1[len], set) == 1)
		len--;
	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return NULL;
	while (start < len + 1)
	{
		buff[i] = s1[start];
		start++;
		i++;
	}
	buff[start] = '\0';
	return buff;
}

int main(void)
{
	char const s1[] = "xpdHELLOxHELLOxpdx";
	char const set[] = "xpd";
	char *buff = ft_strtrim(s1, set);

	printf("%s\n", buff);
	return 0;
}
