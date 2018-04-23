/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 15:42:54 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/20 17:41:45 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;
	t_list *add;

	ret = NULL;
	if (lst)
	{
		add = (f(lst));
		if (!(ret = ft_lstnew(add->content, add->content_size)))
			return (NULL);
		add = ret;
		lst = lst->next;
		while (lst)
		{
			add->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
			if (!add->next)
				return (NULL);
			add = add->next;
			lst = lst->next;
		}
	}
	return (ret);
}
