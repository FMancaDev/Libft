/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:23:13 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/14 19:33:55 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*next_element;

	next_element = malloc(sizeof(t_list));
	if (!next_element)
		return (NULL);
	next_element->content = content;
	next_element->next = NULL;
	return (next_element);
}

/*#include <stdio.h>

int	main()
{
	t_list	*list;
	char 	*a = "fwedfwegferw";

	list = ft_lstnew(a);
	printf("%s", ((char *)list->content));
}*/
