/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 21:01:41 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/09 18:42:04 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] != (char)c) && (s[i]))
	{
		i++;
	}
	if (s[i] != (char)c)
	{
		return (NULL);
	}
	else
		return ((char *)&s[i]);
}

/*#include <stdio.h>

int	main()
{
	char str[] = "hello how are u doing";
	char c = 'o';

	printf("found: %s\n", ft_strchr(str, c));
}*/
