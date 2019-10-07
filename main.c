/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:25:12 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/07 13:56:55 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	main()
{
	//char c;

	// // ft_toupper
	// c = 'E';
	// printf("ft_toupper : %d | char : %c\n", ft_toupper(c), c);
	// c = 'E';
	// printf("toupper : %d | char : %c\n", toupper(c), c);
	//
	// // ft_tolower
	// c = 'E';
	// printf("ft_tolower : %d | char : %c\n", ft_tolower(c), c);
	// c = 'E';
	// printf("tolower : %d | char : %c\n", tolower(c), c);

	// ft_strchr
	printf("ft_strchr : %s\n", ft_strchr("on test tout", 'z'));
	printf("strchr : %s\n", strchr("on test tout", 'z'));
}
