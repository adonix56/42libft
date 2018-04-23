/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:58:14 by jsalanga          #+#    #+#             */
/*   Updated: 2018/04/23 16:18:15 by jsalanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	found_c(int word, int *i_ret, char **ret)
{
	if (word > 0)
	{
		ret[*i_ret][word] = '\0';
		*i_ret = *i_ret + 1;
	}
	return (0);
}

static void	null_out(char **ret, int i, int j, int word)
{
	if (word != 0)
		found_c(word, &i, ret);
	if (i == j)
		ret[i] = (void *)NULL;
}

static int	calculate(char const *s, char c, char **ret, int n)
{
	int i;
	int i_ret;
	int	word;

	i_ret = 0;
	i = 0;
	word = 0;
	while (s[i] && i_ret < n)
	{
		if (s[i] == c)
			word = found_c(word, &i_ret, ret);
		else
		{
			if (!word)
			{
				if (!(ret[i_ret] = (char *)malloc(sizeof(char) *
								word_len(&s[i], c))))
					return (0);
			}
			ret[i_ret][word++] = s[i];
		}
		i++;
	}
	null_out(ret, i_ret, n, word);
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;

	ret = NULL;
	if (s)
	{
		i = ft_countwords(s, c);
		ret = (char **)malloc(sizeof(char *) * (i + 1));
		if (ret)
		{
			if (!calculate(s, c, ret, i))
				return (NULL);
		}
	}
	return (ret);
}
