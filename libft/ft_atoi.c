#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result * sign;
}

int main(void)
{
	char str[] = "      -10000000000000000000000000000000";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return 0;
}
