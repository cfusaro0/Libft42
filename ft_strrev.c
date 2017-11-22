/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 05:09:10 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:30:08 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*str1;
	char	*str2;
	char	tmp;

	if (!str || *str)
		return (str);
	str1 = str;
	str2 = str + ft_strlen(str) - 1;
	while (str2 > str1)
	{
		tmp = *str2;
		*str2 = *str1;
		*str1 = tmp;
		++str1;
		--str2;
	}
	return (str);
}
