/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:27:49 by imellali          #+#    #+#             */
/*   Updated: 2024/11/07 12:27:51 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	idx;
	char	*substr;

	i = 0;
	idx = start;
	substr = malloc(sizeof(char) * len);
	if (substr == NULL)
		return (NULL);
	while (s[idx] != '\0' && i < len)
	{
		substr[i] = s[idx];
		i++;
		idx++;
	}
	substr[i] = '\0';
	return (substr);
}
