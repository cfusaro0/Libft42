/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 00:56:37 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/19 11:39:20 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		a;
	char	*substr;

	if (s == NULL)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	a = 0;
	while (len--)
	{
		substr[a] = s[start + a];
		a++;
	}
	substr[a] = '\0';
	return (substr);
}
