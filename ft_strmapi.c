/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:26:07 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/26 23:06:24 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	int		j;
	char	*temp;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	temp = malloc ((j + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (s[i])
	{
		temp[i] = f (i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
