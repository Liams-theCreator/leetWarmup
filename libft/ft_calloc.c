/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:09:48 by imellali          #+#    #+#             */
/*   Updated: 2024/11/06 18:10:48 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
