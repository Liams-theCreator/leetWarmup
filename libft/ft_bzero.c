void ft_bzero(void *s, size_t n)
{
	unsigned char *buf = s;
	size_t i = 0;

	while (i < n)
	{
		buf[i] = 0;
		i++;
	}
}
