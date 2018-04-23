/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:03:21 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/17 16:18:18 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dst[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (dstsize < dlen + 1)
		return (slen + dstsize);
	else if (dstsize > dlen + 1)
	{
		while (dlen < dstsize - 1)
			dst[dlen++] = src[i++];
		dst[dlen] = '\0';
	}
	return ((dlen - i) + slen);
}
