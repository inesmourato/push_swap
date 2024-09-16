/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:43:15 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:20:17 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}

// int main(void)
// {
//         char a[] = "ola";
//         char b [] = "bom";
//         char c [] = "dia";
//         t_list *node1;
//         t_list *node2;
//         t_list *node3;
//         node1 = ft_lstnew(&a);
//         node2 = ft_lstnew(&b);
//         node3 = ft_lstnew(&c);
//         node1->next=node2;
//         node2->next=node3;
//         node3->next=NULL;
//         printf("%d", ft_lstsize(node1));
// }