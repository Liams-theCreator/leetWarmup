#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("TEST 1  ---> expected : %d , got : %d\n",atoi("0"),ft_atoi("0"));
	printf("TEST 2  ---> expected : %d , got : %d\n",atoi("546:5"),ft_atoi("546:5"));
	printf("TEST 3  ---> expected : %d , got : %d\n",atoi("-4886"),ft_atoi("-4886"));
	printf("TEST 4  ---> expected : %d , got : %d\n",atoi("+548"),ft_atoi("+548"));
	printf("TEST 6  ---> expected : %d , got : %d\n",atoi("054854"),ft_atoi("054854"));
	printf("TEST 7  ---> expected : %d , got : %d\n",atoi("000074"),ft_atoi("000074"));
	printf("TEST 8  ---> expected : %d , got : %d\n",atoi("+-54"),ft_atoi("+-54"));
	printf("TEST 9  ---> expected : %d , got : %d\n",atoi("-+48"),ft_atoi("-+48"));
	printf("TEST 10 ---> expected : %d , got : %d\n",atoi("--47"),ft_atoi("--47"));
	printf("TEST 11 ---> expected : %d , got : %d\n",atoi("++47"),ft_atoi("++47"));
	printf("TEST 12 ---> expected : %d , got : %d\n",atoi("+47+5"),ft_atoi("+47+5"));
	printf("TEST 13 ---> expected : %d , got : %d\n",atoi("-47-5"),ft_atoi("-47-5"));
	printf("TEST 14 ---> expected : %d , got : %d\n",atoi("\e475"),ft_atoi("\e475"));
	printf("TEST 15 ---> expected : %d , got : %d\n",atoi("\t\n\r\v\f  469 \n"),ft_atoi("\t\n\r\v\f  469 \n")); // false
	printf("TEST 16 ---> expected : %d , got : %d\n",atoi("-2147483648"),ft_atoi("-2147483648"));
	printf("TEST 17 ---> expected : %d , got : %d\n",atoi("2147483647"),ft_atoi("2147483647"));
	printf("TEST 17 ---> expected : %d , got : %d\n",atoi("\t\n\r\v\fd469 \n"),ft_atoi("\t\n\r\v\fd469 \n"));
	printf("TEST 19 ---> expected : %d , got : %d\n",atoi("\n\n\6  -46\b9 \n5d6"),ft_atoi("\n\n\6  -46\b9 \n5d6"));

	return 0;
}
