/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 20:08:44 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 11:51:27 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	if (nb <= 0)
		return (0);
	while (a < 999999)
	{
		if ((a * a) == nb)
			return (a);
		a++;
	}
	return (0);
}
