/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:58:05 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/04/29 16:08:14 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks if character is a printable character

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint('b'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint(129));
	printf("%d\n", isprint('b'));
	printf("%d\n", isprint('1'));
	printf("%d\n", isprint(129));
}*/