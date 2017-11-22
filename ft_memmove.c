/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:53:18 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:22:04 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str, const void *src, size_t len)
{
	char	*strsrc;
	char	*strstr;

	strsrc = (char*)src;
	strstr = (char*)str;
	if (strsrc < strstr)
	{
		strsrc = strsrc + len - 1;
		strstr = strstr + len - 1;
		while (len > 0)
		{
			*strstr-- = *strsrc--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*strstr++ = *strsrc++;
			len--;
		}
	}
	return (str);
}
