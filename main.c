/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:25:12 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/07 17:03:25 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	main()
{
	printf("\n\n\n");
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

	// // ft_strchr
	// printf("ft_strchr : %s\n", ft_strchr("on test tout", 'z'));
	// printf("strchr : %s\n", strchr("on test tout", 'z'));
	//
	// // ft_strrchr
	// printf("ft_strrchr : %s\n", ft_strrchr("on test tout", 't'));
	// printf("strrchr : %s\n", strrchr("on test tout", 't'));

	// // ft_strncmp
	// printf("ft_strncmp : %d\n", ft_strncmp("on test tout", "on tast tout", 1));
	// printf("strncmp : %d\n", strncmp("on test tout", "on tast tout", 1));

	char dst[40] = "te";
	char src[] = "on test tout";

	// ft_strlcpy
	//printf("%lu", ft_strlen(src));
	//printf("ft_strlcpy --> return : %lu | dst : %s\n", ft_strlcpy(dst, src, 10), dst);
	//printf("strlcpy --> return : %zu | dst : %s\n", strlcpy(dst, src, 10), dst);

	// ft_strlcat
	printf("ft_strlcat --> return : %lu | dst : %s", ft_strlcat(dst, src, 13), dst);
	//printf("strlcat --> return : %lu | dst : %s", strlcat(dst, src, 13), dst);
	printf("\n\n\n");
}
