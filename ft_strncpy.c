/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:42:45 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/21 19:17:11 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	a;

	a = -1;
	while (++a < n)
	{
		if (*(src + a))
			*(dest + a) = *(src + a);
		else
			while (a < n)
				*(dest + a++) = '\0';
	}
	return (dest);
}
