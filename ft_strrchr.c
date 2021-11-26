/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:00:33 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 02:43:52 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	cc;
	char	*ss;

	len = ft_strlen(s) + 1;
	ss = (char *) s;
	cc = (char) c;
	while (len--)
	{
		if (ss[len] == cc)
			return (&ss[len]);
	}
	return (NULL);
}
