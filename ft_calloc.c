/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 23:32:55 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/09 22:40:48 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc (nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int 	main()
{
	int *arr1;
	size_t i;

	arr1 = (int *) ft_calloc(5, sizeof(int));
	if (!arr1)
		return (1);
	printf("\narray de int com calloc:\n\n");

	for (i = 0; i < 5; i++)
		printf("arr1[%zu] = %d\n", i, arr1[i]);
	free(arr1);

}*/
