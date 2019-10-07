/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:11:10 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/07 18:55:00 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	void 		*origin_dst;
	void		*pt_dst;

	pt_dst = dst;
	while (dst)
	{
		origin_dst = dst;
		dst++;
	}
	dst = pt_dst;
	i = 0;
	while (i < len)
	{
		dst = (void*)src;
		dst++;
		src++;
		i++;
	}
	return (origin_dst);
}
