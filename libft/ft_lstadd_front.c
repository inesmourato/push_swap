/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:29:51 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/02 12:46:10 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// add a new node to the beginning of the list

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main (void)
// {
//         char a [] = "eu sou";
//         char b [] = "o hugo";
//         char c [] = "guerreiro";
//         t_list *node1;
//         t_list *node2;
//         t_list *node3;
//         node1 = ft_lstnew(&a);
//         node2 = ft_lstnew(&b);
//         node3 = ft_lstnew(&c);
//         node1->next=node2;
//         printf("%s\n", (char*)node1->content);
//         ft_lstadd_front(&node1, node3);
//         printf("%s", (char*)node1->content);
// }
