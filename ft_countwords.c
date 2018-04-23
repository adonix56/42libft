/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 12:30:23 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 12:32:19 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *s, char c)
{
	int ret;
	int word;
	int i;

	ret = 0;
	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			word = 1;
		else if (s[i] == c && word)
		{
			ret++;
			word = 0;
		}
		i++;
	}
	if (word)
		ret++;
	return (ret);
}
