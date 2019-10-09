/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:43:38 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/09 12:37:24 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	t_list	*tmp_new;

	tmp = lst;
	if (!(new_lst = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst) + 1)))
		return (NULL);
	tmp_new = new_lst;
	while (tmp)
	{
		new_lst = (*f)(tmp->content);
		new_lst = new_lst->next;
		tmp = tmp->next;
	}
	return (tmp_new);
}
