/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:23:23 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/26 22:59:51 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*ss;
	size_t		i;

	ss = (char *) s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == (char) c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}
