/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 01:31:49 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/19 11:26:02 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	a;

	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	while (*s1 != '\0')
		dest[a++] = *s1++;
	while (*s2 != '\0')
		dest[a++] = *s2++;
	dest[a] = '\0';
	return (dest);
}
