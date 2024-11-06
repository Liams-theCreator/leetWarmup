/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:52:40 by imellali          #+#    #+#             */
/*   Updated: 2024/11/06 17:54:25 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	{
		ln = 0;
		while (ln < n)
		{
			pdest[ln] = psrc[ln];
			ln++;
		}
	}
	return (dest);
}
