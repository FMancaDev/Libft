/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:11:44 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/13 23:29:32 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*#include <fcntl.h>

int	main()
{
	int fd = open("nbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        write(2, "Error opening file\n", 19);
        return (1);
    }
    ft_putnbr_fd(12345, fd);       //positive number
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-6789, fd);       //negative number
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(0, fd);           //zero to file
    close(fd);
    return (0);
}*/
