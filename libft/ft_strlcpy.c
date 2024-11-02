size_t ft_strlen(const char *str)
{
	size_t len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen = ft_strlen(src);
	size_t i = 0;
	if (dstsize > srclen)
	{
		while (*src != '\0')
		{
			*dst = *src;
			src++;
			dst++;
		}
	}
	else
	{
		while(i < dstlen - 1)
		{
			*dst = *src;
			dst++;
			src++;
		}
	}
	return srclen;
}
