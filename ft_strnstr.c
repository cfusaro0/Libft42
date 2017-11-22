/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:27:50 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:29:47 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	strn;
	char	*str1;
	char	*str2;

	if (!*s2)
		return ((void*)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			strn = n;
			str1 = (void*)s1 + 1;
			str2 = (void*)s2 + 1;
			while (strn-- && *str1 && *str2 && *str1 == *str2)
			{
				++str1;
				++str2;
			}
			if (!*str2)
				return ((void*)s1);
		}
		s1++;
	}
	return (NULL);
}
