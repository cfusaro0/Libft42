/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:54:33 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:21:30 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		a;

	a = 0;
	while (a < n)
	{
		if (((unsigned char*)s)[a] == (unsigned char)c)
			return (((void*)&((unsigned char*)s)[a]));
		a++;
	}
	return (NULL);
}
