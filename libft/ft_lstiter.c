/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:03:58 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 16:37:10 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// iterates the list and applies the function to each node

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// void print_list_contents(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// int main(void)
// {
//         t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));
// 	node1->content = "ola";
// 	node2->content = "bom";
// 	node3->content = "dia";
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
//         ft_lstiter(node1, &print_list_contents);
// }