#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char val = c;
	unsigned char *buf = b;
	size_t i = 0;

	while (i < len)
	{
		buf[i] = val;
		i++;
	}
	return b;
}


int main() {
	
	char buffer[5];
	int i = 0;

	ft_memset(buffer, ',', 5);
	while (i < 5)
	{
		printf("%c", buffer[i]);
		i++;
	}

    return 0;
}

