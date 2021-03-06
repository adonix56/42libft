/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:16:21 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 15:44:28 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	ret = NULL;
	if (s)
	{
		ret = ft_strnew(ft_strlen(s));
		if (ret && f)
		{
			while (s[i])
			{
				ret[i] = f(i, s[i]);
				i++;
			}
		}
	}
	return (ret);
}
