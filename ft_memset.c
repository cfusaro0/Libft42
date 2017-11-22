/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:27:59 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 14:38:44 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int src, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)dest;
	while (n-- > 0)
		*str++ = (unsigned char)src;
	return (dest);
}
