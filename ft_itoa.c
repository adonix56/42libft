/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 19:29:04 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 20:49:23 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	long ret;

	ret = 1;
	while (n >= 10)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}


char		*ft_itoa(int n)
{
	long	nbr;
	char	*ret;
	int		neg;
	int		len;

	nbr = n;
	neg = (v < 0 ? 1 : 0);
	len = count_digits(nbr) + neg;
	ret = ft_strnew(len);
	if (ret)
	{
		while (len >= neg)
		{
			ret[--len] = n % 10 + '0';
			n /= 10;
		}
		if (neg)
			ret[0] = '-';
	}
	return (ret);
}
