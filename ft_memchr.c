/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 22:51:15 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/09 18:50:40 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
		{
			return ((void *)str);
		}
		str++;
		n--;
	}
	return (NULL);
}

/*#include <stdio.h>

int 	main()
{
 	char	str[] = "heWllo this is my fuWtion";
	//char 	str[] = "";
	char 	*fd;

	fd = ft_memchr(str, 'W', 10);
	if (fd)
		printf("Founded: %c\n", *fd);
	else
		printf("Null\n");
}*/
