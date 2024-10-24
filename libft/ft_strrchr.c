size_t ft_strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return len;
}

char *ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == c)
			return (char *)&s[i];
		i--;
	}
	return (char *)0;
}
