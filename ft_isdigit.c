/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:27:59 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/07 23:34:43 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	int	s1 = '5';
	int s2 = 'a';
	int	s3 = ' ';

	printf("Is digit?: %d\n", ft_isdigit(s1));
	printf("Is digit?: %d\n", ft_isdigit(s2));
	printf("Is digit?: %d\n", ft_isdigit(s3));
}*/
