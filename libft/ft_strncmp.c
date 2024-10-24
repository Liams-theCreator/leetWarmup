int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n <= 0)
		return 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];
}
