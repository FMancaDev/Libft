/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:37:56 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/08 21:40:53 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return ;
}

/*#include <stdio.h>

int main()
{
	int str[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	ft_bzero(str, 36);

	int n = sizeof(str) / sizeof(str[0]); // descobrir qnts elements tem o array

	for (int i = 0; i < n; i++)
		printf("%d", str[i]);
	printf("\n");
}*/
