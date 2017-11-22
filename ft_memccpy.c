/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:51:03 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:21:23 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			a;
	unsigned char	b;

	a = 0;
	b = (unsigned char)c;
	while (a < n)
	{
		((char*)dest)[a] = ((char*)src)[a];
		a++;
		if (((unsigned char*)dest)[a - 1] == b)
			return (&((unsigned char*)dest)[a]);
	}
	return (NULL);
}
