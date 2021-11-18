/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 03:28:30 by yamzil            #+#    #+#             */
/*   Updated: 2021/11/18 03:28:32 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *temp;

    struct *temp = (struct node *)malloc(sizeof(t_list))
    temp -> content = content; // temp.data = 2;
    //(*temp) -> next = (*content);
    //(*content) = temp;
return(temp);
}