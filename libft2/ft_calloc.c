/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:23:02 by imellali          #+#    #+#             */
/*   Updated: 2024/11/07 12:23:05 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	fullsize;
	char	*buf;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	fullsize = nmemb * size;
	buf = malloc(fullsize);
	if (buf == NULL)
		return (NULL);
	while (i < fullsize)
	{
		buf[i] = 0;
		i++;
	}
	return (buf);
}
