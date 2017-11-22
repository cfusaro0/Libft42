/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:48:02 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:21:49 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str, const	void *src, size_t n)
{
	char		*strstr;
	const char	*strsrc;

	strstr = str;
	strsrc = src;
	while (n > 0)
	{
		*strstr++ = *strsrc++;
		n--;
	}
	return (str);
}
