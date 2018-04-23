/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:57:34 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/17 17:08:46 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;
	char	*new;

	i = 0;
	ret = NULL;
	new = (char *)s;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = &new[i];
		i++;
	}
	if (c == 0)
		ret = &new[i];
	return (ret);
}
