/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:52:51 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/04/29 16:07:18 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii('b'));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", isascii('b'));
	printf("%d\n", isascii('1'));
	printf("%d\n", isascii(128));
}*/