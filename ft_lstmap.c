/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:38 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/08 15:30:13 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*new_lst;

	if (!(new_lst = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst) + 1)))
		return (NULL);
	while (lst)
	{
		new_lst = (*f)(lst->content);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
