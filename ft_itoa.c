/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:19:30 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/15 17:19:32 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_itoa(int n)
{
    int m;
    int i;
    //char go[10]="0123456789";
    char *temp;

    m = n;
    i  = 0;
    temp = (char *) malloc(n);
    if (!temp)
        return (NULL);
    if (m < 0)
    {
        m *= -1;
        i++;
    }
    else
        m = m;
    while (m > 9)
    {
        temp[i++] = m % 10 + 48;
        temp[i++] = m / 10 + 48;
    }
    temp[i] = '\0';
   return(temp);
}

#include<stdio.h>
int main()
{
    printf("%s",ft_itoa(5));
}
