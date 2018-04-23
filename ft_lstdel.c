/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:16:38 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/20 14:50:04 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*helper;

	helper = *alst;
	while (helper)
	{
		helper = helper->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = helper;
	}
}
