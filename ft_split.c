/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:03:50 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/16 18:03:53 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int count_thewords(const char *str , char c)
{
	int	count;

	count = 0;
	while (*(++str))
		if ((*(str + 1) == c || !*(str + 1)) && *str != c)
			count++;
	return (count);
}

static char **free_temp(char **ss)
{
	int i;

	i = 0;
	while (ss[i])
	{
		free(ss[i]);
		i++;
	}
	free(ss);
	return(ss);
}

static int count_charr(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}


char	**ft_split(char const *s, char c)
{
	int i;
	char **temp;
	
	i = 0;
	if (!s)
		return (NULL);
	temp = (char **)malloc((count_thewords(s,c) + 1) * sizeof(char*));
	if (!temp)
		return (NULL);
	while (*s)
	{
		while(s[0] == c && *s)
			s++;
		if (*s != c && *s)
		{
			temp[i++] = ft_substr(s,0, count_charr(s, c));
			s += count_charr(s, c);
		}
		if (!temp[i - 1])
			return(free_temp(temp));
	}
	temp[i] = NULL;
	return (temp);
}

#i