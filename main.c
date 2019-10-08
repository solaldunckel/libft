/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:25:12 by sdunckel          #+#    #+#             */
/*   Updated: 2019/10/08 15:38:29 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int 	main(int argc, char **argv)
{
	size_t 	i;
	size_t 	n;
	char c;
	(void)argc;
	(void)argv;
	n = -12421;

	printf("\n");

	// // ft_toupper
	c = 'E';
	printf("ft_toupper : %d | char : %c\n", ft_toupper(c), c);
	c = 'E';
	printf("toupper : %d | char : %c\n", toupper(c), c);
	//
	// // ft_tolower
	c = 'E';
	printf("ft_tolower : %d | char : %c\n", ft_tolower(c), c);
	c = 'E';
	printf("tolower : %d | char : %c\n", tolower(c), c);

	// // ft_strchr
	printf("ft_strchr : %s\n", ft_strchr("on test tout", 'z'));
	printf("strchr : %s\n", strchr("on test tout", 'z'));

	// // ft_strrchr
	printf("ft_strrchr : %s\n", ft_strrchr("on test tout", 't'));
	printf("strrchr : %s\n", strrchr("on test tout", 't'));

	// // ft_strncmp
	printf("ft_strncmp : %d\n", ft_strncmp("on test tout", "on tast tout", 1));
	printf("strncmp : %d\n", strncmp("on test tout", "on tast tout", 1));

	// char dst[40] = "te";
	// char src[] = "on test tout";

	// ft_strlcpy
	//printf("%lu", ft_strlen(src));
	//printf("ft_strlcpy --> return : %lu | dst : %s\n", ft_strlcpy(dst, src, 10), dst);
	//printf("strlcpy --> return : %zu | dst : %s\n", strlcpy(dst, src, 10), dst);

	// ft_strlcat
	//printf("ft_strlcat --> return : %lu | dst : %s", ft_strlcat(dst, src, 13), dst);
	//printf("strlcat --> return : %lu | dst : %s", strlcat(dst, src, 13), dst);

	// ft_strnstr
	// printf("ft_strnstr --> %s\n", ft_strnstr(argv[1], argv[2], 4));
	// printf("strnstr --> %s\n", strnstr(argv[1], argv[2], 4));

	// ft_substr
	printf("ft_substr : [%s]\n", ft_substr("on test tout", 3, 5));

	// ft_strjoin
	printf("ft_strjoin : [%s]\n", ft_strjoin("allo", "maman"));

	// ft_strtrim
	printf("ft_strtrim : [%s]\n", ft_strtrim(" je test toutmon frere", "e"));

	// ft_split
	char 	**tab;

	i = -1;
	tab = ft_split("      l ll  lllon la voulu mon garsllllll     ", ' ');
	printf("ft_split : ");
	while (tab[++i])
		printf("[%s]", tab[i]);
	printf("\n");

	// ft_intlen
	printf("ft_intlen : %lu\n", ft_intlen(n));

	// ft_itoa
	printf("ft_itoa : %s\n", ft_itoa(n));

	printf("\n");
}
