/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:18:52 by imellali          #+#    #+#             */
/*   Updated: 2024/11/06 18:21:09 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_compare(char s, char tofind)
{
	if (s == tofind)
		return (1);
	return (0);
}

size_t	ft_countword(const char *str, char c)
{
	size_t	word;
	size_t	i;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_compare(str[i], c) == 1)
			i++;
		if (str[i] != '\0' && ft_compare(str[i], c) == 0)
			word++;
		while (str[i] != '\0' && ft_compare(str[i], c) == 0)
			i++;
	}
	return (word);
}

char	*ft_mallocing(const char *str, char c)
{
	size_t	i;
	size_t	len;
	char	*buffer;

	i = 0;
	len = 0;
	while (str[len] != '\0' && ft_compare(str[len], c) == 0)
		len++;
	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	while (i < len)
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	idx;
	size_t	word;
	char	**buffer;

	i = 0;
	idx = 0;
	word = ft_countword(s, c);
	buffer = malloc(sizeof(char *) * (word + 1));
	if (buffer == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && ft_compare(s[i], c) == 1)
			i++;
		if (s[i] != '\0' && ft_compare(s[i], c) == 0)
		{
			buffer[idx] = ft_mallocing((s + i), c);
			idx++;
		}
		while (s[i] != '\0' && ft_compare(s[i], c) == 0)
			i++;
	}
	buffer[idx] = (NULL);
	return (buffer);
}
