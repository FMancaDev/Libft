/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:51:34 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/16 15:51:41 by fomanca          ###   ########.fr       */
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
