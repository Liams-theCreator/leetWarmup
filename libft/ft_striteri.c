/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:26:24 by imellali          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/11/11 15:14:04 by imellali         ###   ########.fr       */
=======
/*   Updated: 2024/11/11 20:32:54 by imellali         ###   ########.fr       */
>>>>>>> f834611 (handling segfault)
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
<<<<<<< HEAD
	if (s == NULL)
		return ;
=======
	if (s == NULL || f == NULL)
		return (void)0;
>>>>>>> f834611 (handling segfault)
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
