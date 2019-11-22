/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:38 by sdunckel          #+#    #+#             */
/*   Updated: 2019/11/22 10:58:10 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*tmp;

	if (!(tmp = ft_lstnew(NULL)))
	{
		ft_lstclear(&tmp, del);
		return (NULL);
	}
	if (lst)
	{
		tmp->content = f(lst->content);
		tmp->next = ft_lstmap(lst->next, f, del);
	}
	return (tmp);
}
