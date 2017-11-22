/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:51:33 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:28:29 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[b])
		b++;
	while (src[a] && a < nb)
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] = '\0';
	return (dest);
}
