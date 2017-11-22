/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 02:06:07 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:30:18 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_word_len(char const *str, char c)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (str[a] == c)
		a++;
	while (str[a] != c && str[a] != '\0')
	{
		a++;
		b++;
	}
	return (b);
}

char			**ft_strsplit(char const *s, char c)
{
	int		a;
	int		b;
	int		d;
	char	**str;

	if (!s || !(str = (char **)malloc(sizeof(*str) *
					(ft_count_words(s, c) + 1))))
		return (NULL);
	a = -1;
	b = 0;
	while (++a < ft_count_words(s, c))
	{
		d = 0;
		if (!(str[a] = ft_strnew(get_word_len(&s[b], c) + 1)))
			str[a] = NULL;
		while (s[b] == c)
			b++;
		while (s[b] != c && s[b])
			str[a][d++] = s[b++];
		str[a][d] = '\0';
	}
	str[a] = 0;
	return (str);
}
