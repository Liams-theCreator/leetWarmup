/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:24:58 by imellali          #+#    #+#             */
/*   Updated: 2024/11/11 18:40:19 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			ln;

	ln = n;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (dest == 0 || src == 0)
		return (dest);
	if (pdest >= psrc && pdest < (psrc + ln))
	{
		while (ln > 0)
		{
			pdest[ln - 1] = psrc[ln - 1];
			ln--;
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (dest);
}
