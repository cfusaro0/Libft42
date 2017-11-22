/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:43:48 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/19 10:59:54 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*t;
	size_t	a;

	if ((t = malloc(size)) == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		t[a] = 0;
		a++;
	}
	return (t);
}
