/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:38:33 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:25:02 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies n characters from src to dest, from one memory area to another
// if the destination string is smaller, the src will be copyied
// backwards, so it doenst overlapp

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*int	main(void)
{
		char dest[] = "ola";
		char src[] = "boas";
		size_t n = 4;

		printf("%s\n", dest);
		char *test = ft_memmove(dest, src, n);
		printf("%s\n", test);
}*/