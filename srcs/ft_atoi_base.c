/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:18:06 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/09 14:57:55 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi_base(char *str, char *base)
{
	int		i;
	int		atoi;
	int		negative;

	i = 0;
	atoi = 0;
	negative = 0;
	if (!ft_check_base(base))
		return (FALSE);
	while (ft_is_space(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = 1;
		str++;
	}
	while (ft_is_in_stri(*str, base) >= 0)
	{
		atoi = atoi * ft_strlen(base) + ft_is_in_stri(*str, base);
		str++;
	}
	return (negative ? -atoi : atoi);
}
