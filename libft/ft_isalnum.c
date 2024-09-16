/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:49:20 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:19:20 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if character belongs to the alphabet or is a digit

int	ft_isalnum(int a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isalnum('*'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('1'));
		printf("%d\n", isalnum('*'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('1'));
}*/