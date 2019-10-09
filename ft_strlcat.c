/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:43:43 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/09 10:04:36 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		dst_len;
	size_t		src_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	while (dstsize > dst_len && j + 1 < dstsize - dst_len)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize != 0 || dst_len < dstsize)
		dst[i] = '\0';
	if (dst_len > dstsize)
		return (dstsize + src_len);
	return (dst_len + src_len);
}
