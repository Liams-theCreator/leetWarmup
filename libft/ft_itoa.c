#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


size_t ft_intlen(int num)
{
	size_t len;

	len = 0;
	if (num == 0)
		return 1;
	if (num < 0)
	{
		num = num * -1;
		len++;
	}
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return len;
}

char *ft_insert(int n, size_t len)
{
	size_t i;
	char *buffer;

	i = 0;
	buffer = malloc(sizeof(char) * (len));
	if (buffer == NULL)
		return NULL;
	if (n < 0)
	{
		n = n * -1;
		buffer[len - 1] = '-';
	}
	while (n != 0)
	{
		buffer[i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	return buffer;
}

char *ft_itoa(int n)
{
	size_t len;
	size_t j;
	char *buffer;
	char *tmp;

	j = 0;
	len = ft_intlen(n);
	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return NULL;
	if (n == 0)
	{
		buffer[0] = n + '0';
		buffer[1] = '\0';
	}
	else
	{
		tmp = ft_insert(n, len);
		while (len != 0)
		{
			buffer[j] = tmp[len - 1];
			len--;
			j++;
		}
		buffer[j] = '\0';
	}
	return buffer;
}

int main(void)
{
	int num;
	size_t len;
	char *buf;

	num = 0;
	len = ft_intlen(num);
	buf = ft_itoa(0);
	printf("%ld\n", len);
	printf("%s\n", buf);
}