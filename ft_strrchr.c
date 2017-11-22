/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:40:21 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:29:57 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			str = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (str);
}
