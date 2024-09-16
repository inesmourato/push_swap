/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:37:42 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/03 11:09:46 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list *node = ft_lstnew("Hello, world!");

// 	printf("Before deletion: %s\n", (char *)node->content);

// 	// Delete the node
// 	ft_lstdelone(node, &free);

// 	printf("After deletion: %s\n", (char *)node->content);

// 	return (0);
// }