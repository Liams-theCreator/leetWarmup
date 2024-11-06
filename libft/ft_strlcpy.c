/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:55:36 by imellali          #+#    #+#             */
/*   Updated: 2024/11/06 17:57:23 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize > srclen)
	{
		while (*src != '\0')
		{
			*dst = *src;
			src++;
			dst++;
		}
		*dst = '\0';
	}
	else
	{
		while (i < dstsize - 1)
		{
			*dst = *src;
			i++;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (srclen);
}
