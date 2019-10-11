/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:38 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/11 14:06:40 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *new;
	t_list *tmp;
	t_list *begin;

	if (!lst)
		return (NULL);
	new = f(lst);
	begin = new;
	tmp = lst;
	while (tmp->next)
	{
		new->next = f(tmp->next);
		new = new->next;
		tmp = tmp->next;
	}
	return (begin);
}
