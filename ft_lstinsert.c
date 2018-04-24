/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:44:32 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/24 11:55:32 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstinsert(t_list **lst, t_list *add, int idx)
{
	t_list	*before;
	t_list	*helper;

	before = NULL;
	helper = *lst;
	while (helper && idx > 0)
	{
		before = helper;
		helper = helper->next;
		idx--;
	}
	if (before)
		before->next = add;
	add->next = helper;
}
