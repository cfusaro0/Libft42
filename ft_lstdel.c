/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 00:50:42 by cfusaro           #+#    #+#             */
/*   Updated: 2017/11/17 13:19:56 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*lst;
	t_list	*next;

	lst = *alst;
	while (lst != NULL)
	{
		next = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = next;
	}
	*alst = NULL;
}
