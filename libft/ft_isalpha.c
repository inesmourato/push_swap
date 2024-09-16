/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:41:18 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/04/18 13:29:29 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// check if character belongs to alphabet
// 1 if yes, 0 if not

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('b'));
// 	printf("%d\n", ft_isalpha('1'));
// 	printf("%d\n", ft_isalpha(' '));
// 	printf("%d\n", isalpha('b'));
// 	printf("%d\n", isalpha('1'));
// 	printf("%d\n", isalpha(' '));
// }
