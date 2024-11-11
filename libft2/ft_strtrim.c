/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:27:41 by imellali          #+#    #+#             */
/*   Updated: 2024/11/07 12:27:42 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_compare(char chr, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == chr)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	i;
	char	*buff;

	start = 0;
	i = 0;
	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_compare(s1[start], set) == 1)
		start++;
	while (ft_compare(s1[len - 1], set) == 1)
		len--;
	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return (NULL);
	while (start < len)
	{
		buff[i] = s1[start];
		start++;
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
