/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 23:26:52 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/09 19:04:02 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int 	main()
{
	char 	p1[] = "ola";
	char	p2[] = "oli";
	int 	n = 1;

	printf("comparacao: %d\n\n", ft_memcmp(p1, p2, n));

// ver memoria
	 char str[] = "ola";
    	 size_t i;

    for (i = 0; i < sizeof(str); i++)
        printf("str[%zu] = '%c' 0x%02X\n", i, str[i], (unsigned char)str[i]);

    return 0;
}*/
