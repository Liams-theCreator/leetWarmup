/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:04:27 by imellali          #+#    #+#             */
/*   Updated: 2024/11/06 18:05:44 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ts1;
	unsigned const char	*ts2;
	size_t				i;

	i = 0;
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (i < n)
	{
		if (*ts1 != *ts2)
			return (*ts1 - *ts2);
		i++;
		ts1++;
		ts2++;
	}
	return (0);
}
