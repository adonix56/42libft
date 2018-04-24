/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 19:29:04 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 20:29:25 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(long n)
{
	size_t ret;

	ret = 1;
	while (n >= 10)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

static void		calc_negs(int *neg, int *n)
{
	if (*n < 0)
	{
		*neg = 1;
		*n = -*n;
	}
}

char			*ft_itoa(int n)
{
	char	*ret;
	int		neg;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	calc_negs(&neg, &n);
	len = count_digit(n) + neg + 1;
	ret = (char *)malloc(sizeof(char) * (len));
	if (ret)
	{
		ret[--len] = '\0';
		while (len >= (size_t)neg)
		{
			ret[--len] = n % 10 + '0';
			n /= 10;
		}
		if (neg)
			ret[0] = '-';
	}
	return (ret);
}
