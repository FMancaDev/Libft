/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:22:37 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/20 13:53:26 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main()
{ 
	char	biger[] = "hello how are we doing today! !@ #$ ^&";
	char 	procura[] = "we";
	int 	len = 25;
	char 	*res = ft_strnstr(biger, procura, len);

	printf("search: %s\n", res);
}*/

// 2.while - compara os carcteres das 2 strings e ve se 
// little esta dentro de big apartir de i

// 1.while - pecorre enq big nao for nulo e menor que len
// 2.while - percorre ent big != '\0' e ...
// big[i + j] == little[j]-compara os caracteres de big e 
// little o loop so continua se forem iguais
// i + j < len - garnate que nao ultrapassamos o limite len
