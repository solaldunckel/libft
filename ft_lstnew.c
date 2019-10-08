/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:12:48 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/08 15:30:20 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content)
{
	t_list	*lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	lst->content = (void*)content;
	lst->next = NULL;
	return (lst);
}
