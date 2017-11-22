/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:35:46 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:26:07 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[b])
		b++;
	while (src[a])
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] = '\0';
	return (dest);
}
