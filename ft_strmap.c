/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 22:45:00 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:28:07 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	n;
	char	*str;
	int		a;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = malloc((n + 1) * sizeof(char));
	a = 0;
	if (!str)
		return (NULL);
	str[n] = '\0';
	while (s[a] != '\0')
	{
		str[a] = (*f)(s[a]);
		a++;
	}
	return (str);
}
