/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:34:19 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/08 15:30:39 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_ptr;

	lst_ptr = *lst;
	while (lst_ptr)
	{
		(*del)(lst_ptr);
		free(lst_ptr);
		lst_ptr = lst_ptr->next;
	}
	*lst = NULL;
}
