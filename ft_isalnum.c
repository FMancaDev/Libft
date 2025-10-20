/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:23:15 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/15 13:23:20 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int 	main()
{
	int s1 = '1';
	int	s2 = 'a';
	int	s3 = '*';
	int	s4 = ' ';

	printf("is alnum: %d\n", ft_isalnum(s1));
	printf("is alnum: %d\n", ft_isalnum(s2));
	printf("is alnum: %d\n", ft_isalnum(s3));
	printf("is alnum: %d\n", ft_isalnum(s4));
}*/
