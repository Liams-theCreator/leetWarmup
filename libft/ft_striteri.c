/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:26:24 by imellali          #+#    #+#             */
/*   Updated: 2024/11/11 20:54:29 by imellali         ###   ########.fr       */
/*   Updated: 2024/11/11 20:32:54 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (void)0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
