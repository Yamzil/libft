/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:52:03 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 10:52:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *temp;

    temp = malloc(size * count);
    if (temp == NULL)
        return(NULL);
    ft_bzero(temp, size * count);
    return (temp);
}
/*
#include <stdio.h>
int main()
{
    int i;
    i = 6;
    char * pointer = (char *) calloc( 6, sizeof(char));
    printf("%s",ft_calloc(6,sizeof(char)));
}
*/