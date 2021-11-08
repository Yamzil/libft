/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:00:33 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/06 16:37:39 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int len;
    char cc;
    char    *ss;

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

/*
#include <stdio.h>
int main()
{
    char go[] = "mohammed";
    char c = 'm';
    printf("%s\n",strrchr(go,c));
    printf("%s",ft_strrchr(go,c));
}
*/
