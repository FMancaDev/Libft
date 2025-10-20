/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:49:11 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/16 15:49:16 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*#include <unistd.h>

int 	main()
{
	int s1 = '!';
	int s2 = 100;
	int s3 = '@';
	int s4 = 200;
	int s5 = '+';
	int s6 = 128;

	printf("is ascii: %d\n", ft_isascii(s1));
	printf("is ascii: %d\n", ft_isascii(s2));
	printf("is ascii: %d\n", ft_isascii(s3));
	printf("is ascii: %d\n", ft_isascii(s4));
	printf("is ascii: %d\n", ft_isascii(s5));
	printf("is ascii: %d\n", ft_isascii(s6));
}*/
