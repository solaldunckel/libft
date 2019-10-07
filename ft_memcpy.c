/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:57:34 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/07 18:55:11 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
	while (i < n)
	{
		dst = (void*)src;
		i++;
	}
	return (origin_dst);
}
