/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 02:32:26 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/18 10:39:49 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *str, char c)
{
	int		count;
	int		words;

	words = 0;
	count = 0;
	while (str[words])
	{
		while (str[words] == c)
			words++;
		if (str[words] != c && str[words] != '\0')
			count++;
		while (str[words] != c && str[words] != '\0')
			words++;
	}
	return (count);
}
