/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:01:08 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 15:39:23 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	i = 0;
	ret = NULL;
	if (s)
	{
		ret = ft_strnew(ft_strlen(s));
		if (ret && f)
		{
			while (*s)
				ret[i++] = f(*s++);
		}
	}
	return (ret);
}
