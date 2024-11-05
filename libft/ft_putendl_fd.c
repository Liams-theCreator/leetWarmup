#include <unistd.h>

size_t ft_strlen(char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

void ft_putendl_fd(char *s, int fd)
{
	size_t len;

	len = ft_strlen(s);
	write(fd, &s, len);
	write(fd, '\n', len);
}

