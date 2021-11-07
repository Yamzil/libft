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
    char *temp
    size_t i;

    temp = malloc(sizeof(char));
    i = 0;
    while (temp[i])
    {
        if (temp[0] != '\0')
        {
            ft_bzero(temp,count * size);
        }
        else
            return (0);
    i++;
    }
}
/*
#include <stdio.h>
int main()
{
    int i;
    i = 6
    char * pointer = (char *) calloc( go, sizeof(char));
    printf("%s",ft_calloc(6))
}
*/