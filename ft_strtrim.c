/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:39:31 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/20 20:08:36 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*ret;
	unsigned int	st;
	size_t			len;

	st = 0;
	while (s[st] == ' ' || s[st] == '\n' || s[st] == '\t')
		st++;
	if (!s[st])
		return ("");
	len = (size_t)st;
	while (s[len])
		len++;
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	ret = ft_strsub(s, st, len - st + 1);
	return (ret);
}
