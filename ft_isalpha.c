/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:17:06 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/07 23:34:19 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	int	s1 = 'K';
	int	s2 = 'a';
	int	s3 = '2';
	int	s4 = ' ';
	int	s5 = 'NUll';

	printf("Is alpha?: %d\n", ft_isalpha(s1));
	printf("Is alpha?: %d\n", ft_isalpha(s2));
	printf("Is alpha?: %d\n", ft_isalpha(s3));
	printf("Is alpha?: %d\n", ft_isalpha(s4));
	printf("Is alpha?: %d\n", ft_isalpha(s5));
}*/
