/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:34:27 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/11 14:34:30 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
include "libft.h"

void    ft_putchar_fd(char c,int fd)
{
    write(fd,&c,1);
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
        ft_putchar_fd ('-');
        n *= -1;
        ft_putchar_fd(-n);
    
    else if (n > 9)
        ft_putnbr_fd(n / 10);
        ft_putnbr_fd(n % 10);
    else  
        ft_putchar(n + 48);
}
*/