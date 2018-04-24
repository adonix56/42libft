/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 11:36:00 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/20 12:41:57 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int ret;

	ret = 1;
	while (n >= 10)
	{
		n = n / 10;
		ret++;
	}
	return (ret);
}

static int	power(int n, int pow)
{
	int ret;

	ret = n;
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		ret = ret * n;
		pow--;
	}
	return (ret);
}

void		ft_putnbr(int n)
{
	int		dig;
	int		nbr;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		dig = digits(n);
		while (dig > 0)
		{
			nbr = n / power(10, dig - 1);
			ft_putchar(nbr + '0');
			n = n - (nbr * power(10, --dig));
		}
	}
}
