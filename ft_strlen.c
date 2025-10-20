/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:55:31 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/16 15:55:33 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main()
{
	char	s1[] = "Hello how are u doing";
	char	s2[] = " ";
	char	s3[] = "";
	char	s4[] = "hello\0world";

	printf("s1: '%s', tamanho: %zu\n", s1, strlen(s1));
	printf("s2: '%s', tamanho: %zu\n", s2, strlen(s2));
	printf("s3: '%s', tamanho: %zu\n", s3, strlen(s3));
	printf("s4: '%s', tamanho: %zu\n", s4, strlen(s4));
}*/
