/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:46:47 by imellali          #+#    #+#             */
/*   Updated: 2024/11/06 17:48:03 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	unsigned char	*buf;
	size_t			i;

	val = c;
	buf = b;
	i = 0;
	while (i < len)
	{
		buf[i] = val;
		i++;
	}
	return (b);
}
