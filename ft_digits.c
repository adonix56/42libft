/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:50:53 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/24 12:53:27 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digits(long n)
{
	size_t ret;

	ret = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}
