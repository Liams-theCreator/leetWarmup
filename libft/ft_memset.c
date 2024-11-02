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
	
	int buffer[] = {1};
	int i = 0;

	ft_memset(buffer, 120, 4 * sizeof(int));
	while (i < 1)
	{
		printf("%d ", buffer[i]);
		i++;
	}

    return 0;
}

