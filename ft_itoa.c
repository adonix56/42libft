/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 19:29:04 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 19:32:54 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int ret;

	ret = 1;
	while (n >= 10)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

static void	calc_neg(int *neg, int *n)
{
	if (*n < 0)
	{
		*neg = 1;
		*n = -*n;
	}
}

char		*ft_itoa(int n)
{
	int		a;
	char	*ret;

	ret = NULL;
	a = n;
	/*int		neg;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	calc_neg(&neg, &n);
	len = digits(n) + neg + 1;
	ret = (char *)malloc(sizeof(char) * (len));
	if (ret)
	{
		ret[--len] = '\0';
		while (len >= neg)
		{
			ret[--len] = n % 10 + '0';
			n /= 10;
		}
		if (neg)
			ret[0] = '-';
	}
	return (ret);*/
	return (0);
}
