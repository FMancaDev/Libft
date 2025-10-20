/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:50:40 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/16 15:50:43 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main()
{

	t_list *st;
	t_list *st1;
	t_list *st2;
	char *a = "c";
	char *b = "d";
	char *c = "e";
	
	st = ft_lstnew((void *)a);
	st1 = ft_lstnew((void *)b);
	st2 = ft_lstnew((void *)c);

	st->next = st1;
	ft_lstadd_front(&st, st2);
	while (st2)
	{
		printf("%s", (char *)st2->content);
		st2 = st2->next;
	}
}*/
