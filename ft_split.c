/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:03:50 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/26 22:46:48 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_thewords(const char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**free_temp(char **ss)
{
	int	i;

	i = 0;
	while (ss[i])
	{
		free(ss[i]);
		i++;
	}
	free (ss);
	return (NULL);
}

static int	count_charr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**temp;

	i = 0;
	if (!s)
		return (NULL);
	temp = malloc ((count_thewords(s, c) + 1) * sizeof (char *));
	if (!temp)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			temp[i] = ft_substr(s, 0, count_charr(s, c));
			if (!temp[i])
				return (free_temp(temp));
			s += count_charr(s, c);
			i++;
		}
	}
	temp[i] = NULL;
	return (temp);
}
