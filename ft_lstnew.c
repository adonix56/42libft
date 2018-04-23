/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 12:46:53 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/20 13:28:13 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;
	void	*ct;

	ret = (t_list *)malloc(sizeof(t_list));
	if (ret)
	{
		if (!content)
		{
			ret->content = NULL;
			ret->content_size = 0;
		}
		else
		{
			ct = malloc(content_size);
			ft_bzero(ct, content_size);
			ft_memmove(ct, content, content_size);
			ret->content = ct;
			ret->content_size = content_size;
		}
		ret->next = NULL;
	}
	return (ret);
}
