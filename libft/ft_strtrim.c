#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return s2;
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t slen = ft_strlen(s1);
	size_t buffsize = 0;
	size_t i = 0;
	size_t j = 0;
	char *buffer;
	const char tmp[];
	while (s1[i] != '\0')
	{
		if (s1[0] == *set || s1[slen - 1] == *set)
			i++;
		tmp[j] = s1[i];
		buffsize++;
		i++;
		j++;
	}
	tmp[j] = '\0';
	buffer = malloc(sizeof(char) * (buffsize + 1));
	if (buffer == NULL)
		return NULL;
	buffer = ft_strcpy(buffer, tmp);
	return buffer;
}

int main(void)
{
	char const s1[] = "xHellox";
	char const set = 'x';

	char *str = ft_strtrim(s1, set);
	printf("%s\n", str);
	return 0;
}
