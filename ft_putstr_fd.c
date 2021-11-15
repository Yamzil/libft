/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:47:17 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/10 22:47:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (!s)
        return ((void)NULL);
    while(s[i])
    {
        write(fd,&s[i],1);
        i++;
    }
}