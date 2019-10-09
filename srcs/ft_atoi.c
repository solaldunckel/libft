/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:01:38 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/09 11:35:33 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		atoi;
	int		negative;

	atoi = 0;
	negative = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\v' || *nptr == '\n' ||
			*nptr == '\r' || *nptr == '\f')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			negative = 1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		atoi = atoi * 10 + *nptr - 48;
		nptr++;
	}
	return (negative ? -atoi : atoi);
}
