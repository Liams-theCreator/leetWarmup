#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

char *ft_strdup(const char *s)
{
	size_t len;
	size_t i;
	char *buffer;

	if (s == NULL)
		return NULL;
	i = 0;
	len = ft_strlen(s);
	
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return NULL;
	while (s[i] != '\0')
	{
		buffer[i] = s[i];
		i++;
	}
	buffer[i] = '\0';
	return buffer;
}
