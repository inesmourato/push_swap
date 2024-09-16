/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:51:53 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/03 11:18:09 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list *node1 = ft_lstnew("ola");
// 	t_list *node2 = ft_lstnew("adeus");
// 	node1->next = node2;
// 	node2->next = NULL;
// 	while (node1)
// 	{
// 		printf("%s\n", (char *)node1->content);
// 		node1 = node1->next;
// 	}
// 	ft_lstclear(&node1, &free);
// 	printf("%s\n", (char *)node1->content);
// }