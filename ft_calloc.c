/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 23:32:55 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/14 18:15:29 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*tmp;
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (total / size != nmemb)
		return (NULL);
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	ptr = (unsigned char *)tmp;
	i = 0;
	while (i < total)
		ptr[i++] = 0;
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
