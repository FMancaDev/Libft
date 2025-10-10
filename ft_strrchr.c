/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:43:00 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/09 22:49:57 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>

int 	main()
{
	char 	str[] = "ioila icoimoi eisitais";
	char	c = 'a';

	printf("original: %s\n", str);
	printf("trying to find: %c\n", c);
	printf("found: %s\n", ft_strrchr(str, c));
}*/
