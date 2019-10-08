/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:54:59 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/08 16:22:42 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		neg;
	int		num_len;

	num = n;
	neg = 0;
	num_len = ft_intlen(num);
	if (num < 0)
	{
		num_len++;
		neg = 1;
		num = -num;
	}
	if (!(str = (char*)malloc(sizeof(char) * num_len + 1)))
		return (NULL);
	str[num_len] = '\0';
	while (num > 0)
	{
		str[--num_len] = num % 10 + 48;
		num = num / 10;
	}
	if (neg)
		str[--num_len] = '-';
	return (str);
}
