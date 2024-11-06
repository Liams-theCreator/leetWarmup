#include <unistd.h>
#include <limits.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

int main(void)
{
	// Positive number
	int normal_test1 = 1337;
	ft_putnbr_fd(normal_test1, 1);
	ft_putchar_fd('\n', 1);

	// Negative number
	int normal_test2 = -1337;
	ft_putnbr_fd(normal_test2, 1);
	ft_putchar_fd('\n', 1);

	// Example of overflow
	int overflow_test = 2147483647;
	ft_putnbr_fd(overflow_test, 1);
	ft_putchar_fd('\n', 1);

	// Simulate overflow
	overflow_test = overflow_test + 1;
	ft_putnbr_fd(overflow_test, 1);
	ft_putchar_fd('\n', 1);

	// Example of underflow
	int underflow_test = -2147483648;
	ft_putnbr_fd(underflow_test, 1);
	ft_putchar_fd('\n', 1);

	// Simulate underflow
	underflow_test = underflow_test - 1;
	ft_putnbr_fd(underflow_test, 1);
	ft_putchar_fd('\n', 1);

	return 0;
}
