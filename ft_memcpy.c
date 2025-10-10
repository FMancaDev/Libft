/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fodemanca <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 01:55:29 by fodemanca         #+#    #+#             */
/*   Updated: 2025/10/08 22:21:50 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			i;

	i = 0;
	pdst = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char src1[] = "Hello, 42!";
    char dst1[20];

    ft_memcpy(dst1, src1, 11); 

    printf("src1: %s\n", src1);
    printf("dst1: %s\n\n", dst1);

	ft_memcpy(dst1, src1, (sizeof(char)));

	printf("endereço de src: %p\n", (void *)src1);
	printf("endereço de dst: %p\n\n", (void *)dst1);

	for (int i = 0; i < 11; i++) {
		printf("src[%d] = %d, dst[%d] = %d\n", i, src1[i], i, dst1[i]);
	}
	return (0);
}*/
