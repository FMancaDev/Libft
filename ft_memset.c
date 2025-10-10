/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 23:31:51 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/08 20:37:12 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char )c;
		i++;
	}
	return (ptr);
}

/*#include <unistd.h>
#include <stdlib.h>

int	main()
{
	char s1[50] = "hello what's going on";

	printf("before: %s\n", s1);
	ft_memset(s1, '*', 11);
	printf("After: %s\n", s1);
	return (0);
}*/
