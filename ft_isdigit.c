/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:49:30 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/16 15:49:34 by fomanca          ###   ########.fr       */
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
