/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 23:08:24 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/07 23:35:45 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft__isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	int	s1 = ' ';
	int	s2 = 127;
	int	s3 = '@';
	int	s4 = 200;
	int	s5 = '~';

	printf("Is print?: %d\n", ft__isprint(s1));
	printf("Is print?: %d\n", ft__isprint(s2));
	printf("Is print?: %d\n", ft__isprint(s3));
	printf("Is print?: %d\n", ft__isprint(s4));
	printf("Is print?: %d\n", ft__isprint(s5));	
}*/
