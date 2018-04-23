/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 18:56:57 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/17 19:45:53 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	ret = (char *)haystack;
	if (needle[0] == '\0')
		return (ret);
	while (haystack[i] && i < (int)len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < (int)len)
		{
			if (needle[j + 1] == '\0')
				return (ret + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
