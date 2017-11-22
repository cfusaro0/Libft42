/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 02:57:09 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:19:31 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	ft_digitnb(int n)
{
	long	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size++);
}

static	int		ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char			*ft_itoa(int n)
{
	long	n_long;
	long	length;
	char	*a;

	n_long = n;
	length = ft_digitnb(n_long);
	a = (char*)malloc((length + 1) * sizeof(char));
	if (!a)
		return (NULL);
	a[length] = '\0';
	length--;
	if (n_long < 0)
		n_long = -n_long;
	while (length >= 0)
	{
		a[length] = (n_long % 10) + '0';
		length--;
		n_long /= 10;
	}
	if (ft_sign(n))
		a[0] = '-';
	return (a);
}
