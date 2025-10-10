/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:22:48 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/09 17:21:52 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    // Teste 1: Sem overlap (normal)
    char str1[20] = "abcdef";
    printf("Antes: %s\n", str1);
    ft_memmove(str1 + 3, str1, 3); // copia "abc" para posição 3
    printf("Depois: %s\n\n", str1); // esperado: "abcabc"

    // Teste 2: Overlap para a frente
    char str2[20] = "123456";
    printf("Antes: %s\n", str2);
    ft_memmove(str2 + 2, str2, 4); // move "1234" para a frente
    printf("Depois: %s\n\n", str2); // esperado: "121234"

    // Teste 3: Overlap para trás
    char str3[20] = "abcdef";
    printf("Antes: %s\n", str3);
    ft_memmove(str3, str3 + 2, 4); // move "cdef" para o início
    printf("Depois: %s\n\n", str3); // esperado: "cdefef"

    // Teste 4: Cópia total (src == dest)
    char str4[20] = "banana";
    printf("Antes: %s\n", str4);
    ft_memmove(str4, str4, 6);
    printf("Depois: %s\n\n", str4); // esperado: "banana"

    // Teste 5: Arrays diferentes (sem overlap)
    char src[] = "openai";
    char dst[20] = "xxxxxx";
    printf("Antes: dst = %s\n", dst);
    ft_memmove(dst, src, 6);
    printf("Depois: dst = %s\n\n", dst); // esperado: "openai"

    // Teste 6: Comparação com memmove da libc
    char test1[20] = "123456";
    char test2[20] = "123456";
    ft_memmove(test1 + 2, test1, 4);
    memmove(test2 + 2, test2, 4);
    printf("ft_memmove: %s\n", test1); // esperado: "121234"
    printf("memmove   : %s\n", test2); // igual ao acima

    return (0);
}*/
