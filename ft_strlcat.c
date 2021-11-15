/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:19:43 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 14:23:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t lendst;
    size_t lensrc; 

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

/*
#include <stdio.h>
int main()
{
	char go[]="yahya";
	char gi[]="amz";
	printf("%zu\n",ft_strlcat(go,gi,2));
	printf("%zu",strlcat(go,gi,2));
}
*/
