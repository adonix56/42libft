/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:54:54 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/16 20:00:04 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s1[size])
		size++;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (ret)
	{
		while (i < size)
		{
			ret[i] = s1[i];
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
