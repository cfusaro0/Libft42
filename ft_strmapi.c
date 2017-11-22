/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 23:49:05 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 12:04:38 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		a;

	if (!s || !f)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	a = -1;
	while (s[++a])
		str[a] = f(a, s[a]);
	return (str);
}
