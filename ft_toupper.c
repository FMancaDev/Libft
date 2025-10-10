/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:16:33 by fomanca           #+#    #+#             */
/*   Updated: 2025/09/27 20:47:56 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z' )
	{
		return (c - 32);
	}
	return (c);
}

/*#include <stdio.h>

int 	main()
{
	int str = 'a';

	printf("upper: %c\n", ft_toupper(str));
}*/
