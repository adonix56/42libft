/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 12:22:18 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/20 12:42:10 by jsalanga         ###   ########.fr       */
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

void		ft_putnbr_fd(int n, int fd)
{
	int		dig;
	int		nbr;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		dig = digits(n);
		while (dig > 0)
		{
			nbr = n / power(10, dig - 1);
			ft_putchar_fd(nbr + '0', fd);
			n = n - (nbr * power(10, --dig));
		}
	}
}
