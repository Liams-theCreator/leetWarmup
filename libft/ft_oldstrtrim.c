#include <stdlib.h>
#include <stdio.h>

size_t ft_begindx(const char *str, const char *set)
{
	size_t i = 0;
	size_t j = 0;

	if (str[i] != '\0')
	{
		if (str[i] == set[j])
		{
			while (str[i + j] == set[j] && set[j] != '\0')
				j++;
			if (set[j] == '\0')
				return j;
		}
	}
	return j;
}

size_t ft_lastidx(const char *str, const char *set, size_t setlen)
{
	size_t len = 0;
	size_t end = 0;

	while (str[len] != '\0')
		len++;

	if (str[len - 1] == set[setlen - 1])
	{
		while (setlen > 0 && str[len - 1] == set[setlen - 1] )
		{
			setlen--;
			len--;
			end++;
		}
	}
	return end;
}

size_t ft_strlen(const char *str)
{
	size_t len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start = ft_begindx(s1, set);
	size_t last = ft_lastidx(s1, set, start);
	size_t end = ft_strlen(s1) - last;
	size_t len = end - start;
	size_t i = 0;
	char *buff;

	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return NULL;

	while (start < end)
	{
		buff[i] = s1[start];
		start++;
		i++;
	}
	buff[i] = '\0';
	return buff;
}

int main(void)
{
	char const s1[] = "xxdxsxdfxxxopHelloopxxxdfxxqlx";
	char const set[] = "xqlofsd";
	char *buff = ft_strtrim(s1, set);
	printf("%s\n", buff);
	return 0;
}
