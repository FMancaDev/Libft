/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 01:56:05 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/20 13:52:47 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*#include <stdio.h>


int main(void)
{ 
    char    src[] = "letters";
	//char	src[] = "";
    char    dest[11];
    size_t  n = 6;

    printf("src: %s\nlength returned: %zu\ndest: %s\n",
           src, ft_strlcpy(dest, src, n), dest);
    return (0);
}*/
