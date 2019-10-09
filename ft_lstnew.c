/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:12:48 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/09 11:58:51 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content)
{
	t_list		*lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	lst->content = (void*)content;
	lst->next = NULL;
	return (lst);
}
