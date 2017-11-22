/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:44:22 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:21:03 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*retval;

	retval = (t_list*)malloc(sizeof(t_list));
	if (retval == NULL)
		return (NULL);
	if (content == NULL)
	{
		retval->content = NULL;
		retval->content_size = 0;
	}
	else
	{
		retval->content = malloc(content_size);
		if (content == NULL)
		{
			free(retval);
			return (NULL);
		}
		ft_memcpy(retval->content, content, content_size);
		retval->content_size = content_size;
	}
	retval->next = NULL;
	return (retval);
}
