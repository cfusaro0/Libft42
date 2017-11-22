/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 01:50:46 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:30:51 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	int				end;

	if (!s)
		return (NULL);
	start = 0;
	end = (int)ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') &&
			s[start])
		start++;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && s[end] &&
			end > (int)start)
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
