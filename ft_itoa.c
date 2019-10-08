/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:54:59 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/08 13:26:18 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char 	*str;
	int		neg;
	int		num_len;

	neg = 0;
	num_len = ft_intlen(n);
	if (n < 0)
	{
		num_len++;
		neg = 1;
		n = -n;
	}
	if (!(str = (char*)malloc(sizeof(char) * num_len + 1)))
		return (NULL);
	str[num_len] = '\0';
	while (n > 0)
	{
		str[--num_len] = n % 10 + 48;
		n = n / 10;
	}
	if (neg)
		str[--num_len] = '-';
	return (str);
}
