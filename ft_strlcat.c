/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:19:43 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/20 02:20:01 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen (src);
	if (lendst < dstsize)
	{
		while (src[i] && lendst < (dstsize - 1))
			dst[lendst++] = src[i++];
			dst[lendst] = '\0';
		return ((lendst - i) + lensrc);
	}
	return (dstsize + lensrc);
}
