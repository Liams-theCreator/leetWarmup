#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	int i;
	int buffer[12];

	i = 0;
	if (n == -2147483647)
	{
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		n = 147483647;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = n * -1;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return;
	}
	while (n != 0)
	{
		buffer[i] = n % 10;
		i++;
		n /= 10;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(buffer[i] + '0', fd);
		i--;
	}
}

int main(void)
{
	ft_putnbr_fd(0, 1);

	return 0;
}
