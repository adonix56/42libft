/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 19:29:04 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 21:05:16 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long n)
{
	int ret;

	ret = 1;
	while (n >= 10)
	{
		n /= 10;
		ret++;
	}
	return (ret++);
}

static void	calc_neg(int *neg, long *nbr)
{
	if (*nbr < 0)
	{
		*neg = 1;
		*nbr = -*nbr;
	}
}

char		*ft_itoa(int n)
{
	long	nbr;
	size_t	count;
	char	*str;
	int		neg;

	nbr = n;
	neg = 0;
	calc_neg(&neg, &nbr);
	count = digit_count(nbr);
	str = ft_strnew(count + neg);
	if (str == NULL)
		return (NULL);
	if (neg)
		str[0] = '-';
	while (count > 0)
	{
		str[count + neg - 1] = nbr % 10 + '0';
		count--;
		nbr /= 10;
	}
	return (str);
}
