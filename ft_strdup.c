/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:38:42 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/08 15:31:18 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (*s1)
	{
		*str = (char)*s1;
		str++;
		s1++;
	}
	return (str);
}
