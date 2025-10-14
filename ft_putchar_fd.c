/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:45:12 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/13 22:31:15 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*#include <fcntl.h>

int	main()
{
	//ft_putchar_fd('H', 1);
	//ft_putchar_fd('\n', 1);

	//ft_putchar_fd('E', 2);
	//ft_putchar_fd('\n', 2);

	int fd = open("ola.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		write (2, "Error opening file\n", 19);
		return (1);
	}
	ft_putchar_fd('H', fd);
	ft_putchar_fd('e', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd(' ', fd);
	ft_putchar_fd('w', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('r', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('d', fd);
	ft_putchar_fd('\n', fd);
	close(fd);

	return (0);
}*/
