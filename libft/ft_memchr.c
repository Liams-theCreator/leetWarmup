/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:02:23 by imellali          #+#    #+#             */
/*   Updated: 2024/11/06 18:04:13 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*pstr;
	unsigned char		chr;
	size_t				len;

	len = 0;
	pstr = (unsigned char *)s;
	chr = (unsigned char)c;
	while (len < n)
	{
		if (*pstr == chr)
			return ((void *)pstr);
		pstr++;
		len++;
	}
	return ((void *)0);
}
