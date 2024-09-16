/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:55:48 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:20:27 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies n characters from src to dest
// it works with blocks of memory and not strings with null terminator

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*int main(void)
{
		char src[10] = "123456789";
		char dest[3] = "ola";
		size_t n = 5;
		char *test = ft_memcpy(dest, src, n);
		char *test2 = memcpy(dest, src, n);

		printf("%s\n", test);
		printf("%s", test2);
}*/