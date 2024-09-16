/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:28:54 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/03 11:18:20 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

// int main(void)
// {
//         t_list *node = ft_lstnew("Ola");
// 	t_list *node2 = ft_lstnew("bom");
// 	t_list *node3 = ft_lstnew("dia");
// 	node->next=node2;
//         node2->next = NULL;
// 	ft_lstadd_back(&node, node3);
// 	while (node)
// 	{
// 		printf( "%s", (char *)node->content);
// 		node = node->next;
// 	}
// 	return (0);

// }