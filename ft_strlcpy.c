/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:01:08 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/04 11:02:13 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	
	if ( size == 0)
		return(0);
	while (dst[i] != '\0' && src[i] != '\0' && size > 0 &&  i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
#include<stdio.h>
int main()
{
	char go[] = "yahya";
	char gi[] = "amz";
	printf("%zu\n",ft_strlcpy(go,gi,2));
	printf("%lu",strlcpy(go,gi,2));

}
