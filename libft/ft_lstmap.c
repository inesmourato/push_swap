/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:44:27 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/03 08:59:08 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new_node;

	if (lst == NULL)
		return (0);
	map = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&map, new_node);
		lst = lst->next;
	}
	return (map);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_obj;
// 	t_list	*new_lst;

// 	if (!f || !lst)
// 		return (NULL);
// 	new_lst = NULL;
// 	while (lst)
// 	{
// 		new_obj = ft_lstnew(f(lst->content));
// 		if (!new_obj)
// 		{
// 			ft_lstclear(&new_lst, (*del));
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&new_lst, new_obj);
// 		lst = lst->next;
// 	}
// 	return (new_lst);
// }
// void	*iterate(void *content)
// {
// 	int *num = (int *)content;
//     int *result = malloc(sizeof(int));
//     if (result == NULL)
//         return NULL;
//     *result = *num + 1;
//     return result;
// }
// void	del_int(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	int content1 = 10;
// 	int content2 = 20;
// 	int content3 = 30;

// 	t_list *elem1 = ft_lstnew(&content1);
// 	t_list *elem2 = ft_lstnew(&content2);
// 	t_list *elem3 = ft_lstnew(&content3);

// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = NULL;

// 	t_list *mapped_list = ft_lstmap(elem1, &iterate, &del_int);

// 	while (mapped_list != NULL)
// 	{
// 		printf("%d\n", *(int *)(mapped_list->content));
// 		mapped_list = mapped_list->next;
// 	}

// 	    ft_lstclear(&elem1, &del_int);
// 	    ft_lstclear(&mapped_list, &del_int);
// 		free(elem1);
// 		free(elem2);
// 		free(elem3);
// 	    return (0);
// }