/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:28:49 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:19:13 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// turns n characters into null

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char str[] = "Ola bom dia";

	ft_bzero(str, 3);
	printf("%d%d%d", str[0], str[1], str[2]);
	printf("%s\n", &str[3]);

	bzero(str, 3);
	printf("%d%d%d", str[0], str[1], str[2]);
	printf("%s\n", &str[3]);
}*/