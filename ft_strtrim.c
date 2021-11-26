/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:13:16 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/26 22:56:02 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkbegin(char const *str, char const *c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (ft_strchr(c, str[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	checkend(char const *str, char const *c)
{
	int	j;

	j = ft_strlen(str) - 1;
	while (str[j])
	{
		if (ft_strchr(c, str[j]) == 0)
			break ;
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		j;
	int		k;
	int		i;

	i = 0;
	j = (checkend(s1, set) + 1);
	k = checkbegin(s1, set);
	if (!s1)
		return (NULL);
	if ((j - k) <= 0)
		return (ft_strdup (""));
	temp = (char *) malloc((j - k + 1) * sizeof (char));
	if (!temp)
		return (NULL);
	while (k < j)
	{
		temp[i] = s1[k];
		i++;
		k++;
	}
	temp[i] = '\0';
	return (temp);
}
