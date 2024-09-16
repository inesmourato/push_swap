/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:07:50 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/03 09:26:57 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns the last node of the list
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	a[] = "ola";
// 	char	b[] = "bom";
// 	char	c[] = "dia";
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
//         node1 = ft_lstnew(&a);
//         node2 = ft_lstnew(&b);
//         node3 = ft_lstnew(&c);
//         node1->next=node2;
//         node2->next=node3;
//         node3->next=NULL;
//         t_list *last;
//         last = ft_lstlast(node1);
//         printf("%s", (char*)last->content);
// }
