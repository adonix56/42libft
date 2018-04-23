/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 15:53:10 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/16 15:58:14 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arg;
	size_t			i;

	i = 0;
	arg = (unsigned char *)s;
	while (i < n)
	{
		if (arg[i] == (unsigned char)c)
			return (&arg[i]);
		i++;
	}
	return ((void *)NULL);
}
