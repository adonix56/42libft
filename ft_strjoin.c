/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:27:36 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 16:13:59 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	ret = NULL;
	if (s1 && s2)
	{
		ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (ret)
		{
			ret = ft_strcpy(ret, s1);
			ret = ft_strcat(ret, s2);
		}
	}
	return (ret);
}
